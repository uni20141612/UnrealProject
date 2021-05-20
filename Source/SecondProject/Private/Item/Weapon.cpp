// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Weapon.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Equipment/EquipmentActor.h"
#include "Character/Player/Component/InventoryComponent.h"

void AWeapon::UseItem(AActor* target)
{
	auto player = Cast<APlayerCharacter>(target);
	if (player != nullptr)
	{
		auto info = GetItemInformation<FWeaponInformation>();
		if (info != nullptr)
		{
			if (player->GetSpawndWeapon() != nullptr)
			{
				player->GetSpawndWeapon()->Destroy();
			}

			auto weapon = GetWorld()->SpawnActor<AEquipmentActor>(info->spawnableEquipmentClass.Get());
			if (weapon != nullptr)
			{
				weapon->SetOwner(target);
				weapon->getSkeletalMesh()->SetSkeletalMesh(info->newMesh);
				weapon->AttachToComponent(player->GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false), "WeaponBackSocket");

				player->GetInventoryComponent()->SetWeapon(info);

				player->GetMesh()->SetAnimInstanceClass(info->animBP->GetAnimBlueprintGeneratedClass());

				player->SetSpawndWeapon(weapon);
			}
		}
	}
		/*
		auto weapon = player->GetSpawndWeapon();
		if (weapon != nullptr)
		{
			auto info = GetItemInformation<FWeaponInformation>();
			if (info != nullptr)
			{
				weapon->getSkeletalMesh()->SetSkeletalMesh(info->newMesh);
				weapon->AttachToComponent(player->GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false), "WeaponBackSocket");

				player->GetInventoryComponent()->SetWeapon(info);

				player->GetMesh()->SetAnimInstanceClass(info->animBP->GetAnimBlueprintGeneratedClass());
			}
		}
	}

	Destroy();
	*/
}