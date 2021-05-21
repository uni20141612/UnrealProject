// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "ItemMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UItemMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetItemCode(const FName& code) { itemCode = code; }
	void DisableUseButton();
	void EnableUseButton();

protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnClickedButtonUse();
	UFUNCTION()
		void OnClickedButtonDrop();
	UFUNCTION()
		void OnClickedButtonRemove();
	UFUNCTION()
		void OnClickedButtonCancel();

protected:
	UPROPERTY()
		class UButton* Button_Use;
	UPROPERTY()
		class UButton* Button_Drop;
	UPROPERTY()
		class UButton* Button_Remove;
	UPROPERTY()
		class UButton* Button_Cancel;

	FName itemCode;
	
};
