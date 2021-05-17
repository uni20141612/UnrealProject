// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Weapon.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Equipment/EquipmentActor.h"

void AWeapon::UseItem(AActor* target)
{
	auto player = Cast<APlayerCharacter>(target);
	if (player != nullptr)
	{
		auto weapon = player->GetSpawndWeapon();
		if (weapon != nullptr)
		{
			auto info = GetItemInformation<FWeaponInformation>();
			if (info != nullptr)
			{
				weapon->getSkeletalMesh()->SetSkeletalMesh(info->newMesh);
			}
		}
	}

	Destroy();
}