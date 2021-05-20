// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Equipment/EquipmentActor.h"

#include "TwoHandedActor.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API ATwoHandedActor : public AEquipmentActor
{
	GENERATED_BODY()

public:
	virtual void Attack() override;
	virtual void Roll() override;
	virtual void Guard() override;
	virtual bool GuardProcess(const FVector &hitLocation) override;
	virtual void HitProcess(const FVector &hitLocation) override;
	
};
