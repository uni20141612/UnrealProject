// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/InventoryListWidget.h"
#include "Widget/ItemButtonWidget.h"
#include "Widget/ItemMenuWidget.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/ScrollBox.h"
#include "Components/Button.h"
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

void UInventoryListWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Button_All->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonAll);
	Button_Weapon->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonWeapon);
	Button_Shield->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonShield);
	Button_Helmet->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonHelmet);
	Button_Chest->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonChest);
	Button_Gloves->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonGloves);
	Button_Legs->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonLegs);
	Button_Boots->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonBoots);
	Button_Consume->OnClicked.AddUniqueDynamic(this, &UInventoryListWidget::OnClickedButtonConsume);
}

void UInventoryListWidget::OnClickedButtonAll()
{
	Init();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
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

void UInventoryListWidget::OnClickedButtonWeapon()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo =iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Weapon)
				{
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
	}
}

void UInventoryListWidget::OnClickedButtonShield()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Shield)
				{
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
	}	
}

void UInventoryListWidget::OnClickedButtonHelmet()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Helmet)
				{
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
	}	
}

void UInventoryListWidget::OnClickedButtonChest()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo =iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Chest)
				{
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
	}	
}

void UInventoryListWidget::OnClickedButtonGloves()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Gloves)
				{
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
	}	
}

void UInventoryListWidget::OnClickedButtonLegs()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Legs)
				{
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
	}	
}

void UInventoryListWidget::OnClickedButtonBoots()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Equipment)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr && equipInfo->equipmentType == EEquipmentType::Boots)
				{
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
	}	
}

void UInventoryListWidget::OnClickedButtonConsume()
{
	Init();
	
	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player == nullptr) { return; }

	if (itemButtonWidgetClass != nullptr)
	{
		auto inven = player->GetInventoryComponent()->GetInventory();
		for (auto iter = inven.CreateConstIterator(); iter; ++iter)
		{
			if (iter->Value->GetItemInfo()->item_Type == EItemType::Consume)
			{
				auto equipInfo = iter->Value->GetEquipmentInfo();

				if (equipInfo != nullptr)
				{
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
	}	
}
