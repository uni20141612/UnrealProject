// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "DragableWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UDragableWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

protected:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UDragShadowWidget> dragShadowWidgetClass;
	UPROPERTY()
		class UDragShadowWidget* dragShadowWidget;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UWidgetDragDropOper> widgetDragDropOperClass;

	UPROPERTY()
		FVector2D dragOffset;
	
};
