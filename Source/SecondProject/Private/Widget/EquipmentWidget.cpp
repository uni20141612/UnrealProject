// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/EquipmentWidget.h"
#include "Widget/EquipmentItemListWidget.h"
#include "Widget/EquipmentButtonWidget.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/HorizontalBox.h"

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
			QuickButtons.Emplace(button);
		}
	}
}
