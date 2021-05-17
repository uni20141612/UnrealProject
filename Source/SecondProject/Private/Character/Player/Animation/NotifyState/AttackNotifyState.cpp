// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Player/Animation/NotifyState/AttackNotifyState.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Equipment/EquipmentActor.h"

void UAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	//플레이어 캐릭터가 가지고 있는 무기를 가져와서 콜리전을 켜세요
	if (MeshComp != nullptr)
	{
		APlayerCharacter* player = Cast<APlayerCharacter>(MeshComp->GetOwner());
		if (player != nullptr)
		{
			auto weapon = player->GetWeapon();
			if (weapon != nullptr)
			{
				weapon->ClearHitActors();
				weapon->getSkeletalMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			}
		}
	}
}

void UAttackNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	//플레이어 캐릭터가 가지고 있는 무기를 가져와서 콜리전을 끄세요
	if (MeshComp != nullptr)
	{
		APlayerCharacter* player = Cast<APlayerCharacter>(MeshComp->GetOwner());
		if (player != nullptr)
		{
			auto weapon = player->GetWeapon();
			if (weapon != nullptr)
			{
				weapon->ClearHitActors();
				weapon->getSkeletalMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}
		}
	}
}