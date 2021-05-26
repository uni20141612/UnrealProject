// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"

#include "WidgetDragDropOper.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UWidgetDragDropOper : public UDragDropOperation
{
	GENERATED_BODY()

public:
	UPROPERTY()
		class UUserWidget* widgetReference;
	UPROPERTY()
		FVector2D dragOffset;	
};
