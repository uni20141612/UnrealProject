// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Character/Monster.h"

#include "MonsterController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeMoveState, EAIMoveState, newState);

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API AMonsterController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void OnPossess(APawn* InPawn) override;	

public:
	FChangeMoveState OnChangeMoveState;

	UFUNCTION()
		void StopBehaviorTree();

protected:
	UPROPERTY()
		class AMonster* OwnerMonster;
};
