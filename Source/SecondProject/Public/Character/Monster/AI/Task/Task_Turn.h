// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Task_Turn.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UTask_Turn : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UTask_Turn();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

public:
	UPROPERTY()
		class AActor* target;
	UPROPERTY()
		class AActor* monster;
	UPROPERTY(EditAnywhere)
		float AcceptSize = 10;
	UPROPERTY(EditAnywhere)
		float interpSpeed = 10;
};
