// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/InventoryWidget.h"
#include "Widget/InventoryListWidget.h"
#include "Widget/ItemInformationWidget.h"
#include "Widget/PlayerInformationWidget.h"
#include "Widget/EquipmentWidget.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	OnVisibilityChanged.AddUniqueDynamic(this, &UInventoryWidget::OnVisibilityChange);
	Button_Inventory->OnClicked.AddUniqueDynamic(this, &UInventoryWidget::OnClickedButtonInventory);
	Button_Equipment->OnClicked.AddUniqueDynamic(this, &UInventoryWidget::OnClickedButtonEquipment);
}

void UInventoryWidget::OnVisibilityChange(ESlateVisibility InVisibility)
{
	if (InVisibility == ESlateVisibility::Visible)
	{
		auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
		if (player != nullptr)
		{
			UMG_PlayerInformation->SetPlayerInformation(player->GetStatusComponent());
			UMG_InventoryList->Init();
			UMG_InventoryList->UpdateItemList(player->GetInventoryComponent());
			UMG_ItemInformation->Init();
		}
	}
	else if (InVisibility == ESlateVisibility::Hidden)
	{
		UMG_InventoryList->RemoveItemMenu();
	}
}

void UInventoryWidget::OnClickedButtonInventory()
{
	WidgetSwitcher_Switcher->SetActiveWidgetIndex(0);
}

void UInventoryWidget::OnClickedButtonEquipment()
{
	WidgetSwitcher_Switcher->SetActiveWidgetIndex(1);
	UMG_Equipment->Init();
}

void UInventoryWidget::UpdateItemListButton(const FName& itemCode, const int32& itemCount)
{
	UMG_InventoryList->UpdateItemButton(itemCode, itemCount);
}