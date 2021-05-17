// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Controller/CustomController.h"
#include "Widget/InventoryWidget.h"
#include "Item/ItemActor.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UInventoryComponent::AddItem(AItemActor* item)
{
	if (item != nullptr)
	{
		//inventory.Add(item->GetItemInfo()->item_Code, item->GetItemInfo());
		auto info = item->GetItemInformation<FItemInformation>();
		if (info != nullptr)
		{
			inventory.Add(info->item_Code, new FStoredItem(info, item->GetItemCount()));
		}
	}
}

void UInventoryComponent::UseItem(const FName& itemCode, AActor* target)
{
	if (inventory.Contains(itemCode))
	{
		auto itemClass = inventory[itemCode]->GetItemInfo()->itemClass;

		if (itemClass != nullptr)
		{
			if (inventory[itemCode]->item_Count > 0)
			{
				inventory[itemCode]->item_Count--;
			}

			auto controller = Cast<ACustomController>(Cast<ACharacter>(GetOwner())->GetController());
			if (controller != nullptr)
			{
				controller->GetInventoryWidget()->UpdateItemListButton(itemCode, inventory[itemCode]->item_Count);
			}

			auto item = GetWorld()->SpawnActor<AItemActor>(itemClass.Get());
			if (item != nullptr)
			{
				item->SetActorHiddenInGame(true);
				item->SetItemCode(itemCode);
				item->UseItem(target);
				item->Destroy();
			}

			if (inventory[itemCode]->item_Count == 0)
			{
				inventory.Remove(itemCode);
			}
		}
	}
}

void UInventoryComponent::DropItem(const FName& itemCode)
{
	if (inventory.Contains(itemCode))
	{
		auto itemClass = inventory[itemCode]->GetItemInfo()->itemClass;
		if (itemClass != nullptr)
		{
			auto item = GetWorld()->SpawnActor<AItemActor>(itemClass.Get(), GetOwner()->GetActorLocation(), FRotator::ZeroRotator);
			if (item != nullptr)
			{
				item->SetItemCode(itemCode);
				item->SetItemCount(inventory[itemCode]->item_Count);
			}
		}

		auto controller = Cast<ACustomController>(Cast<ACharacter>(GetOwner())->GetController());
		if (controller != nullptr)
		{
			controller->GetInventoryWidget()->UpdateItemListButton(itemCode, 0);
		}

		inventory.Remove(itemCode);
	}
}

void UInventoryComponent::RemoveItem(const FName& itemCode)
{
	if (inventory.Contains(itemCode))
	{
		inventory.Remove(itemCode);
	}

	auto controller = Cast<ACustomController>(Cast<ACharacter>(GetOwner())->GetController());
	if (controller != nullptr)
	{
		controller->GetInventoryWidget()->UpdateItemListButton(itemCode, 0);
	}
}

const FStoredItem* UInventoryComponent::GetItem(const FName& itemCode)
{
	if (inventory.Contains(itemCode))
	{
		return inventory[itemCode];
	}
	return nullptr;
}

const FItemInformation* UInventoryComponent::GetItemInfo(const FName& itemCode)
{
	if (inventory.Contains(itemCode))
	{
		return inventory[itemCode]->GetItemInfo();
	}
	return nullptr;
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();	
}