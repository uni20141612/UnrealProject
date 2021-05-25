// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Gloves.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "..\..\Public\Item\Gloves.h"

void AGloves::UseItem(AActor* target)
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
				player->GetGloves()->SetSkeletalMesh(info->mesh);
				player->GetInventoryComponent()->SetGloves(info);
			}
		}
	}
	Destroy();
}

void AGloves::UnEquip(AActor* target, const FEquipmentInformation* info)
{
	Super::UnEquip(target, info);

	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			player->GetInventoryComponent()->SetGloves(nullptr);
			player->GetGloves()->SetSkeletalMesh(nullptr);
		}
	}
}

const FEquipmentInformation* AGloves::GetEquippedItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto equippedItem = player->GetInventoryComponent()->GetEquippedItem();
			return equippedItem.GetGloves();
		}
	}
	return nullptr;
}
