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

	FStoredItem() { }
	FStoredItem(FItemInformation* itemInfo, int32 count) { info = itemInfo; item_Count = count; }

	const FItemInformation* GetItemInfo() { return info; }
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

	const FStoredItem* GetItem(const FName& itemCode);
	const FItemInformation* GetItemInfo(const FName& itemCode);

	const TMap<FName, FStoredItem*>& GetInventory() { return inventory; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

protected:
	TMap<FName, FStoredItem*> inventory;		
};
