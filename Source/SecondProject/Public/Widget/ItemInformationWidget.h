// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Item/ItemTypes.h"

#include "ItemInformationWidget.generated.h"
/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UItemInformationWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void Init();
	void SetInformation(const FName& itemCode);

protected:
	UPROPERTY()
		class UTextBlock* TextBlock_ItemName;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemCount;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemDescription;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemDescription_Long;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemType;

	UPROPERTY()
		class UImage* Image_ItemImage;
};
