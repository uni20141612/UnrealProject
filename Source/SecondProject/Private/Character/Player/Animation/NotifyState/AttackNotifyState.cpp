// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Player/Animation/NotifyState/AttackNotifyState.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Equipment/EquipmentActor.h"

void UAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	//�÷��̾� ĳ���Ͱ� ������ �ִ� ���⸦ �����ͼ� �ݸ����� �Ѽ���
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
	//�÷��̾� ĳ���Ͱ� ������ �ִ� ���⸦ �����ͼ� �ݸ����� ������
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