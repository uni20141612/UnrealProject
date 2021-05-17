// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "ShowDamageWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UShowDamageWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetDamageText(float damage);

protected:
	UPROPERTY()
		class UTextBlock* TextBlock_Damage;
};
