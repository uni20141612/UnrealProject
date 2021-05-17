// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"

#include "AttackNotifyState.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UAttackNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()

protected:
	//스테이트 시작될때
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
	//스테이트 구간
	//virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
	//스테이트 끝날때
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);	
};
