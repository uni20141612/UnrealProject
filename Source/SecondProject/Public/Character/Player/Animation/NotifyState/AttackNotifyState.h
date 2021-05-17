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
	//������Ʈ ���۵ɶ�
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
	//������Ʈ ����
	//virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
	//������Ʈ ������
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);	
};
