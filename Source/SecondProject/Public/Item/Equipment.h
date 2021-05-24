// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ItemActor.h"

#include "Equipment.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API AEquipment : public AItemActor
{
	GENERATED_BODY()

protected:
	virtual void UseItem(AActor* target) override;
	virtual void UnEquip(AActor* target) override;

	virtual const FEquipmentInformation* GetEquippedItem(AActor* target) { return nullptr; }

protected:
	bool bUnEquipSameEquipment = false;
	
};
