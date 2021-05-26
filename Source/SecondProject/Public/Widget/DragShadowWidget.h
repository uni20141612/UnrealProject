// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "DragShadowWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UDragShadowWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY()
		class UUserWidget* widgetReference;
	UPROPERTY()
		FVector2D dragOffset;

protected:
	UPROPERTY()
		class USizeBox* sizeBox_Override;
	
};
