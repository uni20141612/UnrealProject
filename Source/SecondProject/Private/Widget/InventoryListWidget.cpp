// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/InventoryListWidget.h"
#include "Widget/ItemButtonWidget.h"
#include "Widget/ItemMenuWidget.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/ScrollBox.h"
#include "Blueprint/WidgetLayoutLibrary.h"

void UInventoryListWidget::Init()
{
	ScrollBox_ItemList->ClearChildren();
}

void UInventoryListWidget::UpdateItemList(UInventoryComponent* invenComp)
{
	if (invenComp != nullptr && itemButtonWidgetClass != nullptr)
	{
		auto inven = invenComp->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			//iter->Value;
			auto button = CreateWidget<UItemButtonWidget>(GetOwningPlayer(), itemButtonWidgetClass.Get());
			if (button != nullptr)
			{
				button->SetItemListWidget(this);
				button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
				ScrollBox_ItemList->AddChild(button);
			}
		}
	}
}

void UInventoryListWidget::UpdateItemButton(const FName& itemCode, const int32& itemCount)
{
	for (auto i = 0; i < ScrollBox_ItemList->GetChildrenCount(); ++i)
	{
		auto button = Cast<UItemButtonWidget>(ScrollBox_ItemList->GetChildAt(i));
		if (button != nullptr)
		{
			if (button->GetItemCode().IsEqual(itemCode) == true)
			{
				if (itemCount == 0)
				{
					button->RemoveFromParent();
				}
				else
				{
					button->UpdateItemCount(itemCount);
				}
				break;
			}
		}
	}
}

void UInventoryListWidget::ShowItemMenu(const FName& item_Code)
{
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr)
	{
		return;
	}

	auto invenComp = player->GetInventoryComponent();
	if (invenComp == nullptr)
	{
		return;
	}

	if (itemMenuWidgetClass != nullptr)
	{
		if (itemMenuWidget == nullptr)
		{
			itemMenuWidget = CreateWidget<UItemMenuWidget>(GetOwningPlayer(), itemMenuWidgetClass.Get());
		}
		itemMenuWidget->SetItemCode(item_Code);
		auto mousePos = UWidgetLayoutLibrary::GetMousePositionOnViewport(GetOwningPlayer());
		itemMenuWidget->SetPositionInViewport(mousePos, false);

		if (invenComp->GetItemInfo(item_Code)->item_Type == EItemType::Consume)
		{
			itemMenuWidget->DisableUseButton();
		}
		else
		{
			itemMenuWidget->EnableUseButton();
		}

		if (itemMenuWidget->IsInViewport() == false)
		{
			itemMenuWidget->AddToViewport();
		}
	}
}

void UInventoryListWidget::RemoveItemMenu()
{
	if (itemMenuWidget != nullptr)
	{
		itemMenuWidget->RemoveFromParent();
	}
}
