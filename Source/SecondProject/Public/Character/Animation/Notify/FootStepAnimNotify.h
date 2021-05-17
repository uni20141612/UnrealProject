// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"

#include "FootStepAnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UFootStepAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
		virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

protected:
	UPROPERTY(EditAnywhere)
		class UParticleSystem* metalParticle;
	UPROPERTY(EditAnywhere)
		class UParticleSystem* waterParticle;
	UPROPERTY(EditAnywhere)
		class UParticleSystem* iceParticle;
	UPROPERTY(EditAnywhere)
		class UParticleSystem* defaultParticle;

	UPROPERTY(EditAnywhere)
		FName socketName;
};
