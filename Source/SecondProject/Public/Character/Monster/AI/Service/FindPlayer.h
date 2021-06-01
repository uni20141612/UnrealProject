// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"

#include "FindPlayer.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UFindPlayer : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	UFindPlayer();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

protected:
	UPROPERTY(EditAnywhere)
		float radius;
	UPROPERTY(EditAnywhere)
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	
};
