// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"

#include "CheckDistance.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UCheckDistance : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UCheckDistance();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
