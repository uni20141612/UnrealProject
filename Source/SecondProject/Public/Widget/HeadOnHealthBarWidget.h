// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "HeadOnHealthBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UHeadOnHealthBarWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetHPPercent(float f);
	
protected:
	UPROPERTY()
		class UProgressBar* ProgressBar_HP;

};
