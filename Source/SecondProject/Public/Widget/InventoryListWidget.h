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
	void UpdateItemList(class UInventoryComponent* invenComp);
	void UpdateItemButton(const FName& itemCode, const int32& itemCount);

	void ShowItemMenu(const FName& item_Code);
	void RemoveItemMenu();

protected:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UItemButtonWidget> itemButtonWidgetClass;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UItemMenuWidget> itemMenuWidgetClass;
	UPROPERTY()
		UItemMenuWidget* itemMenuWidget;

protected:
	UPROPERTY()
		class UButton* Button_All;
	UPROPERTY()
		class UButton* Button_Weapon;
	UPROPERTY()
		class UButton* Button_Shield;
	UPROPERTY()
		class UButton* Button_Amor;
	UPROPERTY()
		class UButton* Button_Consume;

	UPROPERTY()
		class UScrollBox* ScrollBox_ItemList;
};
