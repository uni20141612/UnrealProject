// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/DragShadowWidget.h"
#include "Components/SizeBox.h"

void UDragShadowWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (widgetReference != nullptr)
	{
		auto size = widgetReference->GetDesiredSize();

		sizeBox_Override->SetHeightOverride(size.Y);
		sizeBox_Override->SetWidthOverride(size.X);
	}
}