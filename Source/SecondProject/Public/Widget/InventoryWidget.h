// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "InventoryWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnVisibilityChange(ESlateVisibility InVisibility);

	void UpdateItemListButton(const FName& itemCode, const int32& itemCount);

	class UItemInformationWidget* GetItemInformation() { return UMG_ItemInformation; }

protected:
	UPROPERTY()
		class UButton* Button_Inventory;
	UPROPERTY()
		class UButton* Button_Equipment;
	UPROPERTY()
		class UWidgetSwitcher* WidgetSwitcher_Switcher;

	UPROPERTY()
		class UInventoryListWidget* UMG_InventoryList;
	UPROPERTY()
		class UItemInformationWidget* UMG_ItemInformation;
	UPROPERTY()
		class UPlayerInformationWidget* UMG_PlayerInformation;
};
