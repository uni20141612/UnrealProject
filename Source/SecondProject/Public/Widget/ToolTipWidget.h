// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ToolTipWidget.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API UToolTipWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetText(FName description);

protected:
	UPROPERTY()
		class UTextBlock* TextBlock_ToolTip;


	
};
