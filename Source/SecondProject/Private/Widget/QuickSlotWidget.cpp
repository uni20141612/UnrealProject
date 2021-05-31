// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/QuickSlotWidget.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Engine/Texture2D.h"

void UQuickSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		player->GetInventoryComponent()->AddQuickEvent.AddUniqueDynamic(this, &UQuickSlotWidget::ChangeQuickSlotEvent);
		player->GetInventoryComponent()->UseQuickEvent.AddUniqueDynamic(this, &UQuickSlotWidget::UseQuickSlotEvent);
	}
}

void UQuickSlotWidget::ChangeQuickSlotEvent(UTexture2D* texture, const int32& count)
{
	Image_Item->SetBrushFromTexture(texture);
	TextBlock_ItemCount->SetText(FText::AsNumber(count));
}

void UQuickSlotWidget::UseQuickSlotEvent(const int32& count)
{
	TextBlock_ItemCount->SetText(FText::AsNumber(count));
}
