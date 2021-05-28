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
	const FEquipmentInformation* GetEquipmentInfo() { return (FEquipmentInformation*)info; }
	const bool IsEquipment() { return info->item_Type == EItemType::Equipment; }
	//GetEquipmentType 사용 전, 반드시 isEquipment가 참인지 확인해야함
	const EEquipmentType GetEquipmentType() { if (IsEquipment() == true) { auto equip = (FEquipmentInformation*)info;  if (equip != nullptr) { return equip->equipmentType; } } return EEquipmentType::None; }
};

USTRUCT(BlueprintType)
struct FEquippedItem
{
	GENERATED_BODY()

private:
	FWeaponInformation* weapon;
	FEquipmentInformation* shield;

	FEquipmentInformation* boots;
	FEquipmentInformation* chest;
	FEquipmentInformation* gloves;
	FEquipmentInformation* helmet;
	FEquipmentInformation* legs;

public:

public:
	void SetWeapon(FWeaponInformation* info) { weapon = info; }
	void SetShield(FEquipmentInformation* info) { shield = info; }

	void SetBoots(FEquipmentInformation* info) { boots = info; }
	void SetChest(FEquipmentInformation* info) { chest = info; }
	void SetGloves(FEquipmentInformation* info) { gloves = info; }
	void SetHelmet(FEquipmentInformation* info) { helmet = info; }
	void SetLegs(FEquipmentInformation* info) { legs = info; }

	const FWeaponInformation* GetWeapon() { return weapon; }
	const FEquipmentInformation* GetShield() { return shield; }

	const FEquipmentInformation* GetBoots() { return boots; }
	const FEquipmentInformation* GetChest() { return chest; }
	const FEquipmentInformation* GetGloves() { return gloves; }
	const FEquipmentInformation* GetHelmet() { return helmet; }
	const FEquipmentInformation* GetLegs() { return legs; }
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquip, class UStatusComponent*, statComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnEquip, class UStatusComponent*, statComp);

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

	void SetBoots(FEquipmentInformation* info) { equippedItem.SetBoots(info); }
	void SetChest(FEquipmentInformation* info) { equippedItem.SetChest(info); }
	void SetGloves(FEquipmentInformation* info) { equippedItem.SetGloves(info); }
	void SetHelmet(FEquipmentInformation* info) { equippedItem.SetHelmet(info); }
	void SetLegs(FEquipmentInformation* info) { equippedItem.SetLegs(info); }

	const FStoredItem* GetItem(const FName& itemCode);
	const FItemInformation* GetItemInfo(const FName& itemCode);
	const FEquippedItem& GetEquippedItem() { return equippedItem; }
	//const EEquipmentType GetEquipmentType(const FName& itemCode);
	//const FEquipmentInformation* GetEquipmentInfo(const FName& itemCode);

	const TMap<FName, FStoredItem*>& GetInventory() { return inventory; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	FEquip EquipEvent;
	FUnEquip UnEquipEvent;

protected:
	TMap<FName, FStoredItem*> inventory;		
	FEquippedItem equippedItem;
};
