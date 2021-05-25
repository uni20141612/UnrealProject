// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Equipment.h"
#include "Boots.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API ABoots : public AEquipment
{
	GENERATED_BODY()

public:
	virtual void UseItem(AActor* target) override;
	virtual void UnEquip(AActor* target, const FEquipmentInformation* info) override;
	virtual const FEquipmentInformation* GetEquippedItem(AActor* target) override;
	
};
