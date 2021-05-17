// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Item/ItemTypes.h"

#include "ItemButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UItemButtonWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetInformation(const FItemInformation* info, const int32& item_Count);
	void UpdateItemCount(const int32& item_Count);

	void SetItemListWidget(class UInventoryListWidget* p_widget);

	virtual void NativeConstruct() override;
	UFUNCTION()
		void OnHoveredButtonItem();
	UFUNCTION()
		void OnClickedButtonItem();

	const FName GetItemCode() { return item_Code; }

protected:
	UPROPERTY()
		class UButton* Button_Item;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemName;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemCount;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemDescription;
	UPROPERTY()
		class UImage* Image_ItemImage;
	UPROPERTY()
		class UInventoryListWidget* UMG_ItemList;

	FName item_Code;
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UToolTipWidget> toolTipWidgetClass;
	UPROPERTY()
		UToolTipWidget* myToolTipWidget;
};
