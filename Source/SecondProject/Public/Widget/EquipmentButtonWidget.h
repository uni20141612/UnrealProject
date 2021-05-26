// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Item/ItemTypes.h"

#include "EquipmentButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UEquipmentButtonWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void Init();
	void SetItemInformation(const FItemInformation* info);
	void SetItemInformation(const FEquipmentInformation* info);
	FName GetItemCode() { return item_Code; }

protected:
	UPROPERTY()
		class UImage* Image_Item;

	FName item_Code;	
};
