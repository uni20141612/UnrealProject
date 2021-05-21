// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Equipment.h"
#include "Helmet.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API AHelmet : public AEquipment
{
	GENERATED_BODY()

public:
	virtual void UseItem(AActor* target) override;
	
};
