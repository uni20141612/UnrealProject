// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Equipment.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Component/StatusComponent.h"

void AEquipment::UseItem(AActor* target)
{
	Super::UseItem(target);

	auto player = Cast<APlayerCharacter>(target);
	if (player != nullptr)
	{
		auto statComp = player->GetStatusComponent();
		auto equippedInfo = GetEquippedItem(target);
		auto info = GetItemInformation<FEquipmentInformation>();
		if (equippedInfo != nullptr)
		{
			UnEquip(target, info);
			if (info->item_Code.IsEqual(equippedInfo->item_Code))
			{
				bUnEquipSameEquipment = true;
				return;
			}
		}

		if (info != nullptr)
		{
			statComp->AddDam(info->dam);
			statComp->AddDef(info->def);

			player->GetInventoryComponent()->EquipEvent.Broadcast(statComp);
		}
	}
}

void AEquipment::UnEquip(AActor* target, const FEquipmentInformation* info)
{
	auto player = Cast<APlayerCharacter>(target);
	if (player != nullptr)
	{
		auto statComp = player->GetStatusComponent();

		if (info != nullptr)
		{
			statComp->AddDam((-1)*info->dam);
			statComp->AddDef((-1)*info->def);

			player->GetInventoryComponent()->UnEquipEvent.Broadcast(statComp);
		}
	}
}
