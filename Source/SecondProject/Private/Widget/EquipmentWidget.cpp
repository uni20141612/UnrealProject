// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/EquipmentWidget.h"
#include "Widget/EquipmentItemListWidget.h"
#include "Widget/EquipmentButtonWidget.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Component/StatusComponent.h"

#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"

void UEquipmentWidget::Init()
{
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	UMG_EquipmentItemList->UpdateItemList(player->GetInventoryComponent());
}

void UEquipmentWidget::NativeConstruct()
{
	Super::NativeConstruct();

	for (auto i = 0; i < HorizontalBox_Quick->GetChildrenCount(); ++i)
	{
		auto button = Cast<UEquipmentButtonWidget>(HorizontalBox_Quick->GetChildAt(i));
		if (button != nullptr)
		{
			button->SetEquipmentButtonType(EEquipmentButtonType::Consume);
			button->SetIndex(i);
			button->SetHorizontalBox_Quick(HorizontalBox_Quick);
			QuickButtons.Emplace(button);
		}
	}

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		player->GetInventoryComponent()->EquipEvent.AddUniqueDynamic(this, &UEquipmentWidget::SetPlayerInformation);
		player->GetInventoryComponent()->UnEquipEvent.AddUniqueDynamic(this, &UEquipmentWidget::SetPlayerInformation);
	}
}

void UEquipmentWidget::SetPlayerInformation(UStatusComponent* statComp)
{
	if (statComp != nullptr)
	{
		TextBlock_Dam->SetText(FText::AsNumber((statComp->GetDam())));
		TextBlock_Def->SetText(FText::AsNumber((statComp->GetDef())));
	}
}
