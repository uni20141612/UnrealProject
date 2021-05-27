// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget/ItemButtonWidget.h"

#include "InventoryListWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UInventoryListWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void Init();
	virtual void UpdateItemList(class UInventoryComponent* invenComp);
	void UpdateItemButton(const FName& itemCode, const int32& itemCount);

	void ShowItemMenu(const FName& item_Code);
	void RemoveItemMenu();

protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
		virtual void OnClickedButtonAll();
	UFUNCTION()
		virtual void OnClickedButtonWeapon();
	UFUNCTION()
		virtual void OnClickedButtonShield();
	UFUNCTION()
		virtual void OnClickedButtonHelmet();
	UFUNCTION()
		virtual void OnClickedButtonChest();
	UFUNCTION()
		virtual void OnClickedButtonGloves();
	UFUNCTION()
		virtual void OnClickedButtonLegs();
	UFUNCTION()
		virtual void OnClickedButtonBoots();
	UFUNCTION()
		virtual void OnClickedButtonConsume();

protected:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UItemButtonWidget> itemButtonWidgetClass;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UItemMenuWidget> itemMenuWidgetClass;
	UPROPERTY()
		UItemMenuWidget* itemMenuWidget;

	UPROPERTY()
		class UButton* Button_All;
	UPROPERTY()
		class UButton* Button_Weapon;
	UPROPERTY()
		class UButton* Button_Shield;
	UPROPERTY()
		class UButton* Button_Helmet;
	UPROPERTY()
		class UButton* Button_Chest;
	UPROPERTY()
		class UButton* Button_Gloves;
	UPROPERTY()
		class UButton* Button_Legs;
	UPROPERTY()
		class UButton* Button_Boots;
	UPROPERTY()
		class UButton* Button_Consume;

	UPROPERTY()
		class UScrollBox* ScrollBox_ItemList;
};
