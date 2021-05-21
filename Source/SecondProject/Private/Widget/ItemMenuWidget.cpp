// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/ItemMenuWidget.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/Button.h"

void UItemMenuWidget::NativeConstruct()
{	
	Button_Use->OnClicked.AddUniqueDynamic(this, &UItemMenuWidget::OnClickedButtonUse);
	Button_Drop->OnClicked.AddUniqueDynamic(this, &UItemMenuWidget::OnClickedButtonDrop);
	Button_Remove->OnClicked.AddUniqueDynamic(this, &UItemMenuWidget::OnClickedButtonRemove);
	Button_Cancel->OnClicked.AddUniqueDynamic(this, &UItemMenuWidget::OnClickedButtonCancel);
	
	Super::NativeConstruct();
}

void UItemMenuWidget::OnClickedButtonUse()
{
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		player->GetInventoryComponent()->UseItem(itemCode, player);
	}

	RemoveFromParent();
}

void UItemMenuWidget::OnClickedButtonDrop()
{
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		player->GetInventoryComponent()->DropItem(itemCode);
	}

	RemoveFromParent();
}

void UItemMenuWidget::OnClickedButtonRemove()
{
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		player->GetInventoryComponent()->RemoveItem(itemCode);
	}

	RemoveFromParent();
}

void UItemMenuWidget::OnClickedButtonCancel()
{
	RemoveFromParent();
}

void UItemMenuWidget::DisableUseButton()
{
	Button_Use->SetIsEnabled(false);
}

void UItemMenuWidget::EnableUseButton()
{
	Button_Use->SetIsEnabled(true);
}
