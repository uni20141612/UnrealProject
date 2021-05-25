// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Boots.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "..\..\Public\Item\Boots.h"

void ABoots::UseItem(AActor* target)
{
	Super::UseItem(target);

	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto info = GetItemInformation<FEquipmentInformation>();
			if (info != nullptr)
			{
				player->GetBoots()->SetSkeletalMesh(info->mesh);
				player->GetInventoryComponent()->SetBoots(info);
			}
		}
	}
	Destroy();
}

void ABoots::UnEquip(AActor* target, const FEquipmentInformation* info)
{
	Super::UnEquip(target, info);

	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			player->GetInventoryComponent()->SetBoots(nullptr);
			player->GetBoots()->SetSkeletalMesh(nullptr);
		}
	}
}

const FEquipmentInformation* ABoots::GetEquippedItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto equippedItem = player->GetInventoryComponent()->GetEquippedItem();
			return equippedItem.GetBoots();
		}
	}
	return nullptr;
}
