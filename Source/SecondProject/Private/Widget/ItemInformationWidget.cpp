// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/ItemInformationWidget.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"

#include "Components/TextBlock.h"
#include "Components/Image.h"

void UItemInformationWidget::Init()
{
	TextBlock_ItemName->SetText(FText::GetEmpty());
	TextBlock_ItemType->SetText(FText::GetEmpty());
	TextBlock_ItemCount->SetText(FText::GetEmpty());
	TextBlock_ItemDescription->SetText(FText::GetEmpty());
	TextBlock_ItemDescription_Long->SetText(FText::GetEmpty());
}

void UItemInformationWidget::SetInformation(const FName& itemCode)
{
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		auto inventoryComp = player->GetInventoryComponent();
		if (inventoryComp != nullptr)
		{
			auto info = inventoryComp->GetItemInfo(itemCode);
			if (info != nullptr)
			{
				TextBlock_ItemName->SetText(FText::FromName(info->item_Name));
				TextBlock_ItemCount->SetText(FText::AsNumber(inventoryComp->GetItem(itemCode)->item_Count));
				TextBlock_ItemDescription->SetText(FText::FromName(info->item_Description));
				TextBlock_ItemDescription_Long->SetText(FText::FromName(info->item_Description_Long));

				FString str = StaticEnum<EItemType>()->GetValueAsString(info->item_Type);
				TextBlock_ItemType->SetText(FText::FromString(str));

				Image_ItemImage->SetBrushFromTexture(info->item_Image);
			}
		}
	}	
}
