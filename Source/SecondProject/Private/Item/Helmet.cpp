// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Helmet.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "..\..\Public\Item\Helmet.h"

void AHelmet::UseItem(AActor* target)
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
				player->GetHelmet()->SetSkeletalMesh(info->mesh);
				player->GetInventoryComponent()->SetHelmet(info);
			}
		}
	}
	Destroy();
}

void AHelmet::UnEquip(AActor* target, const FEquipmentInformation* info)
{
	Super::UnEquip(target, info);

	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			player->GetInventoryComponent()->SetHelmet(nullptr);
			player->GetHelmet()->SetSkeletalMesh(nullptr);
		}
	}
}

const FEquipmentInformation* AHelmet::GetEquippedItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
		if (player != nullptr)
		{
			auto equippedItem = player->GetInventoryComponent()->GetEquippedItem();
			return equippedItem.GetHelmet();
		}
	}
	return nullptr;
}
