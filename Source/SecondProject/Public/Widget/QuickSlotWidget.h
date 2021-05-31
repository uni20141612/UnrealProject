// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "QuickSlotWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UQuickSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void ChangeQuickSlotEvent(class UTexture2D* texture, const int32& count);
	UFUNCTION()
		void UseQuickSlotEvent(const int32& count);

protected:
	UPROPERTY()
		class UImage* Image_Item;
	UPROPERTY()
		class UTextBlock* TextBlock_ItemCount;	
};
