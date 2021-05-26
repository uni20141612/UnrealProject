// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widget/DragableWidget.h"
#include "Item/ItemTypes.h"

#include "DragItemButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UDragItemButtonWidget : public UDragableWidget
{
	GENERATED_BODY()
public:
	void SetInformation(const FItemInformation* info, const int32& item_Count);
	virtual void NativeConstruct() override;
	
public:
	UPROPERTY()
		class UTextBlock* TextBlock_ItemName;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemCount;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemDescription;
	UPROPERTY()
		class UImage* Image_ItemImage;

	FName item_Code;
};
