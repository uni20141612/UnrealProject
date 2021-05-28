// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Legs.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Components/SkeletalMeshComponent.h"

void ALegs::UseItem(AActor* target)
{
	Super::UseItem(target);

	if (bUnEquipSameEquipment)
	{
		Destroy();
		return;
	}

	if(target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto info = GetItemInformation<FEquipmentInformation>();
			if (info != nullptr)
			{
				player->GetLegs()->SetSkeletalMesh(info->mesh);
				player->GetInventoryComponent()->SetLegs(info);
			}
		}
	}
	Destroy();
}

void ALegs::UnEquip(AActor* target, const FEquipmentInformation* info)
{
	Super::UnEquip(target, info);

	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			player->GetInventoryComponent()->SetLegs(nullptr);
			player->GetLegs()->SetSkeletalMesh(nullptr);
		}
	}
}

const FEquipmentInformation* ALegs::GetEquippedItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto equippedItem = player->GetInventoryComponent()->GetEquippedItem();
			return equippedItem.GetLegs();
		}
	}
	return nullptr;
}
