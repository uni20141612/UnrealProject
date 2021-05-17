// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"

#include "CreateLinetraceNotifyState.generated.h"

/**
 * 
 */
UCLASS()
class UCreateLinetraceNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY()
		class ABaseCharacter* owner;

protected:

	UPROPERTY(EditAnywhere)
		float radius;
	UPROPERTY(EditAnywhere)
		float damage;

	UPROPERTY(EditAnywhere)
		FName startSocket;
	UPROPERTY(EditAnywhere)
		FName endSocket;

	UPROPERTY(EditAnywhere)
		class UParticleSystem* hitParticle;

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
};
