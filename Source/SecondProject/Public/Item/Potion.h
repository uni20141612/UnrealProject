// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ItemActor.h"

#include "Potion.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API APotion : public AItemActor
{
	GENERATED_BODY()

protected:
	virtual void UseItem(AActor* target) override;

protected:
};
