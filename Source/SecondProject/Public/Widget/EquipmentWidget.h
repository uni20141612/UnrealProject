// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "EquipmentWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UEquipmentWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void Init();
	virtual void NativeConstruct() override;

protected:
	UPROPERTY()
		class UEquipmentItemListWidget* UMG_EquipmentItemList;
	UPROPERTY()
		class UEquipmentButtonWidget* UMG_EquipmentButton_Helmet;
	UPROPERTY()
		class UEquipmentButtonWidget* UMG_EquipmentButton_Weapon;
	UPROPERTY()
		class UEquipmentButtonWidget* UMG_EquipmentButton_Chest;
	UPROPERTY()
		class UEquipmentButtonWidget* UMG_EquipmentButton_Shield;
	UPROPERTY()
		class UEquipmentButtonWidget* UMG_EquipmentButton_Gloves;
	UPROPERTY()
		class UEquipmentButtonWidget* UMG_EquipmentButton_Legs;
	UPROPERTY()
		class UEquipmentButtonWidget* UMG_EquipmentButton_Boots;

	UPROPERTY()
		class UHorizontalBox* HorizontalBox_Quick;

	TArray<class UEquipmentButtonWidget*> QuickButtons;
	
};
