// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/EquipmentItemListWidget.h"
#include "Widget/DragItemButtonWidget.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/ScrollBox.h"

void UEquipmentItemListWidget::OnClickedButtonAll()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			//iter->Value;
			auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
			if (button != nullptr)
			{
				button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
				ScrollBox_ItemList->AddChild(button);
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonWeapon()
{
	Init(); 

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Weapon)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonShield()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Shield)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonHelmet()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Helmet)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonChest()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Chest)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonGloves()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Gloves)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonLegs()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Legs)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonBoots()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Boots)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::OnClickedButtonConsume()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (dragItemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Consume)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr)
				{
					auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
					if (button != nullptr)
					{
						button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
						ScrollBox_ItemList->AddChild(button);
					}
				}
			}
		}
	}
}

void UEquipmentItemListWidget::UpdateItemList(UInventoryComponent* invenComp)
{
	Init();

	if (invenComp != nullptr && dragItemButtonWidgetClass != nullptr)
	{
		auto inven = invenComp->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			//iter->Value;
			auto button = CreateWidget<UDragItemButtonWidget>(GetOwningPlayer(), dragItemButtonWidgetClass.Get());
			if (button != nullptr)
			{
				button->SetInformation(iter->Value->GetItemInfo(), iter->Value->item_Count);
				ScrollBox_ItemList->AddChild(button);
			}
		}
	}
}
