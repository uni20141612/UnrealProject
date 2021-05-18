// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item/ItemTypes.h"

#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FStoredItem
{
	GENERATED_BODY()

private:
	FItemInformation* info;

public:
	int32 item_Count = 0;

public:
	FStoredItem() { }
	FStoredItem(FItemInformation* itemInfo, int32 count) { info = itemInfo; item_Count = count; }

	const FItemInformation* GetItemInfo() { return info; }
};

USTRUCT(BlueprintType)
struct FEquippedItem
{
	GENERATED_BODY()

private:
	FWeaponInformation* weapon;
	FEquipmentInformation* shield;

public:



public:
	void SetWeapon(FWeaponInformation* info) { weapon = info; }
	void SetShield(FEquipmentInformation* info) { shield = info; }

	const FWeaponInformation* GetWeapon() { return weapon; }
	const FEquipmentInformation* GetShield() { return shield; }
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SECONDPROJECT_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryComponent();

	void AddItem(class AItemActor* item);
	void UseItem(const FName& itemCode, AActor* target);
	void DropItem(const FName& itemCode);
	void RemoveItem(const FName& itemCode);

	void SetWeapon(FWeaponInformation* info) { equippedItem.SetWeapon(info); }
	void SetShield(FEquipmentInformation* info) { equippedItem.SetShield(info); }

	const FStoredItem* GetItem(const FName& itemCode);
	const FItemInformation* GetItemInfo(const FName& itemCode);
	const FEquippedItem& GetEquippedItem() { return equippedItem; }

	const TMap<FName, FStoredItem*>& GetInventory() { return inventory; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

protected:
	TMap<FName, FStoredItem*> inventory;		
	FEquippedItem equippedItem;
};
