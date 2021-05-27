// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widget/InventoryListWidget.h"
#include "EquipmentItemListWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UEquipmentItemListWidget : public UInventoryListWidget
{
	GENERATED_BODY()
public:
	virtual void UpdateItemList(class UInventoryComponent* invenComp);

protected:
		virtual void OnClickedButtonAll();
		virtual void OnClickedButtonWeapon();
		virtual void OnClickedButtonShield();
		virtual void OnClickedButtonHelmet();
		virtual void OnClickedButtonChest();
		virtual void OnClickedButtonGloves();
		virtual void OnClickedButtonLegs();
		virtual void OnClickedButtonBoots();
		virtual void OnClickedButtonConsume();

protected:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UDragItemButtonWidget> dragItemButtonWidgetClass;
};
