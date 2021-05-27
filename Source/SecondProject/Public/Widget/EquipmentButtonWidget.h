// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Item/ItemTypes.h"

#include "EquipmentButtonWidget.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EEquipmentButtonType : uint8
{
	Weapon,
	Shield,
	Helmet,
	Gloves,
	Chest,
	Legs,
	Boots,
	Consume,
};

UCLASS()
class SECONDPROJECT_API UEquipmentButtonWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void Init();
	void SetItemInformation(const FItemInformation* info, const int32& itemCount);
	void SetItemInformation(const FEquipmentInformation* info);
	void SetEquipmentButtonType(EEquipmentButtonType type) { buttonType = type; }
	FName GetItemCode() { return item_Code; }

protected:
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

protected:
	UPROPERTY()
		class UImage* Image_Item;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemCount;

	UPROPERTY(EditAnywhere)
		EEquipmentButtonType buttonType;

	FName item_Code;	
};
