// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Chest.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "..\..\Public\Item\Chest.h"

void AChest::UseItem(AActor* target)
{
	Super::UseItem(target);

	if (bUnEquipSameEquipment)
	{
		Destroy();
		return;
	}

	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto info = GetItemInformation<FEquipmentInformation>();
			if (info != nullptr)
			{
				player->GetChest()->SetSkeletalMesh(info->mesh);
				player->GetInventoryComponent()->SetChest(info);
			}
		}
	}
	Destroy();
}

void AChest::UnEquip(AActor* target, const FEquipmentInformation* info)
{
	Super::UnEquip(target, info);

	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			player->GetInventoryComponent()->SetChest(nullptr);
			player->GetChest()->SetSkeletalMesh(nullptr);
		}
	}
}

const FEquipmentInformation* AChest::GetEquippedItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto equippedItem = player->GetInventoryComponent()->GetEquippedItem();
			return equippedItem.GetChest();
		}
	}
	return nullptr;
}
