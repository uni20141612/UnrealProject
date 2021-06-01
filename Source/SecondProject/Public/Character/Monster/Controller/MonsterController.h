// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "MonsterController.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API AMonsterController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void OnPossess(APawn* InPawn) override;	

protected:
	UPROPERTY()
		class AMonster* OwnerMonster;
};
