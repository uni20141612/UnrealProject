// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Equipment.h"
#include "Gloves.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API AGloves : public AEquipment
{
	GENERATED_BODY()

public:
	virtual void UseItem(AActor* target) override;
	
};
