// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "PlayerInformationWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UPlayerInformationWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void SetPlayerInformation(class UStatusComponent* statComp);

protected:
	UPROPERTY()
		class UTextBlock* TextBlock_CurrentHP;
	UPROPERTY()
		class UTextBlock* TextBlock_CurrentSP;

	UPROPERTY()
		class UTextBlock* TextBlock_Dam;
	UPROPERTY()
		class UTextBlock* TextBlock_Def;

};
