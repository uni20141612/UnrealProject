// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Equipment.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API AWeapon : public AEquipment
{
	GENERATED_BODY()

protected:
	virtual void UseItem(AActor* target) override;
	
};
