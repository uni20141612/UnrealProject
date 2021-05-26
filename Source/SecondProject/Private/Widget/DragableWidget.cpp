// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/DragableWidget.h"
#include "Widget/DragShadowWidget.h"
#include "Widget/WidgetDragDropOper.h"

#include "Blueprint/SlateBlueprintLibrary.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

void UDragableWidget::NativeConstruct()
{
	Super::NativeConstruct();

	SetVisibility(ESlateVisibility::Visible);
}

void UDragableWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if (dragShadowWidgetClass != nullptr)
	{
		dragShadowWidget = CreateWidget<UDragShadowWidget>(GetOwningPlayer(), dragShadowWidgetClass.Get());
		if (dragShadowWidget != nullptr)
		{
			dragShadowWidget->widgetReference = this;

			if (widgetDragDropOperClass != nullptr)
			{
				auto dragOper = Cast<UWidgetDragDropOper>(UWidgetBlueprintLibrary::CreateDragDropOperation(widgetDragDropOperClass));
				if (dragOper != nullptr)
				{
					dragOper->DefaultDragVisual = dragShadowWidget;
					dragOper->Pivot = EDragPivot::MouseDown;
					dragOper->widgetReference = this;
					dragOper->dragOffset = dragOffset;

					OutOperation = dragOper;
				}
			}
		}
	}
}

FReply UDragableWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	dragOffset = USlateBlueprintLibrary::AbsoluteToLocal(InGeometry, InMouseEvent.GetScreenSpacePosition());

	return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, FKey("LeftMouseButton")).NativeReply;
}
