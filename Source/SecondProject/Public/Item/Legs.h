// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Equipment.h"
#include "Legs.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API ALegs : public AEquipment
{
	GENERATED_BODY()

public:
	virtual void UseItem(AActor* target) override;
	virtual void UnEquip(AActor* target) override;
	virtual const FEquipmentInformation* GetEquippedItem(AActor* target) override;
	
};
