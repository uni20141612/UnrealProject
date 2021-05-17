// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Player/Animation/NotifyState/CheckInputNotifyState.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Component/StatusComponent.h"

void UCheckInputNotifyState::BranchingPointNotifyBegin(FBranchingPointNotifyPayload& BranchingPointPayload)
{
	if (BranchingPointPayload.SkelMeshComponent != nullptr)
	{
		Player = Cast<APlayerCharacter>(BranchingPointPayload.SkelMeshComponent->GetOwner());
		bContinue = false;
	}
}

void UCheckInputNotifyState::BranchingPointNotifyTick(FBranchingPointNotifyPayload& BranchingPointPayload, float FrameDeltaTime)
{
	if (Player != nullptr)
	{
		if (Player->GetbAttack())
		{
			bContinue = true;
		}
	}
}

void UCheckInputNotifyState::BranchingPointNotifyEnd(FBranchingPointNotifyPayload& BranchingPointPayload)
{
	if (Player != nullptr)
	{
		if (!bContinue)
		{
			BranchingPointPayload.SkelMeshComponent->GetAnimInstance()->Montage_Stop(0.1f);
			Player->GetStatusComponent()->RunRecoverStaminaTimer();
		}
		else
		{
			if (Player->GetStatusComponent()->CheckStamina(20))
			{
				Player->GetStatusComponent()->SetSP(Player->GetStatusComponent()->GetSP() - 20);
				BranchingPointPayload.SkelMeshComponent->GetAnimInstance()->Montage_JumpToSection(nextSection);
			}
			else
			{
				BranchingPointPayload.SkelMeshComponent->GetAnimInstance()->Montage_Stop(0.1f);
				Player->GetStatusComponent()->RunRecoverStaminaTimer();
			}
		}
	}
}