// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Player/Animation/Notify/EquipNotify.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Equipment/EquipmentActor.h"

void UEquipNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	if (MeshComp != nullptr) 
	{		
		auto player =  Cast<APlayerCharacter>(MeshComp->GetOwner());
		if (player != nullptr)
		{
			if (bEquip)
			{
				auto weapon = player->GetWeapon();
				if (weapon != nullptr) 
				{
					weapon->AttachToComponent(
						MeshComp,
						FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false),
						"hand_rSocket"
					);
				}

				auto shield = player->GetShield();
				if (shield != nullptr) 
				{
					shield->AttachToComponent(
						MeshComp,
						FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false),
						"lowerarm_lSocket"
					);
				}
			}
			else 
			{
				auto weapon = player->GetWeapon();
				if (weapon != nullptr) 
				{
					weapon->AttachToComponent(
						MeshComp,
						FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false),
						UnEquipSocket
					);
				}

				auto shield = player->GetShield();
				if (shield != nullptr) 
				{
					shield->AttachToComponent(
						MeshComp,
						FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false),
						"ShieldSocket"
					);
				}
			}
		}
	}
}