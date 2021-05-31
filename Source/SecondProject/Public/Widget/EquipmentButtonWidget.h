// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widget/DragableWidget.h"
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
class SECONDPROJECT_API UEquipmentButtonWidget : public UDragableWidget
{
	GENERATED_BODY()

public:
	void Init();
	void SetItemInformation(const FItemInformation* info, const int32& itemCount);
	void SetItemInformation(const FEquipmentInformation* info);
	void SetIndex(const int32& value) { index = value; }
	void SetEquipmentButtonType(EEquipmentButtonType type) { buttonType = type; }
	void SetHorizontalBox_Quick(class UHorizontalBox* box) { quickListBox = box; }
	FName GetItemCode() { return item_Code; }

protected:
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override; 

protected:
	UPROPERTY()
		class UImage* Image_Item;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemCount;

	UPROPERTY()
		class UHorizontalBox* quickListBox;

	UPROPERTY(EditAnywhere)
		EEquipmentButtonType buttonType;
	UPROPERTY(EditAnywhere)
		class UTexture2D* emptyTexture;

	FName item_Code = NAME_None;	

	int32 index = -1;
};
