// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"

#include "CheckInputNotifyState.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UCheckInputNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()

protected:
	virtual void BranchingPointNotifyBegin(FBranchingPointNotifyPayload& BranchingPointPayload) override;
	virtual void BranchingPointNotifyTick(FBranchingPointNotifyPayload& BranchingPointPayload, float FrameDeltaTime) override;
	virtual void BranchingPointNotifyEnd(FBranchingPointNotifyPayload& BranchingPointPayload) override;

protected:
	UPROPERTY()
		class APlayerCharacter* Player;
	UPROPERTY(EditAnywhere)
		FName nextSection;
	bool bContinue;
};
