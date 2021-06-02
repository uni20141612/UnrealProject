// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"

#include "Task_PlayRandomAnimation.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UTask_PlayRandomAnimation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UTask_PlayRandomAnimation();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	void FinishTask();

public:
	UPROPERTY(EditAnywhere)
		TArray<class UAnimMontage*> Montages;

protected:
	UPROPERTY()
		UBehaviorTreeComponent* BT_Comp;
};
