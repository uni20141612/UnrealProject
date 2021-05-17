// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/InventoryWidget.h"
#include "Widget/InventoryListWidget.h"
#include "Widget/ItemInformationWidget.h"
#include "Widget/PlayerInformationWidget.h"

#include "Character/Player/PlayerCharacter.h"

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	OnVisibilityChanged.AddUniqueDynamic(this, &UInventoryWidget::OnVisibilityChange);
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

void UInventoryWidget::UpdateItemListButton(const FName& itemCode, const int32& itemCount)
{
	UMG_InventoryList->UpdateItemButton(itemCode, itemCount);
}