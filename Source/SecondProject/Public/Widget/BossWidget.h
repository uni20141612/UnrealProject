// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "BossWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UBossWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:
	void SetMonster(class AMonster* m);

protected:
	UPROPERTY()
		class UTextBlock* TextBlock_BossName;
	UPROPERTY()
		class UProgressBar* BossHP;
	
	UPROPERTY()
		class AMonster* monster;
};
