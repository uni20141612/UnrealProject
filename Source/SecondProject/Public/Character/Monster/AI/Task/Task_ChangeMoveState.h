// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Character/Monster.h"

#include "Task_ChangeMoveState.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UTask_ChangeMoveState : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UTask_ChangeMoveState();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere)
		EAIMoveState newState;
};
