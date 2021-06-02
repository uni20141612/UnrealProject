// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Character/Monster.h"

#include "Task_ChangeCombatState.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UTask_ChangeCombatState : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UTask_ChangeCombatState();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere)
		TArray<EAICombatState> newStates;
};
