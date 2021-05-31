// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/MainWidget.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Component/StatusComponent.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UMainWidget::NativeConstruct()
{
	Super::NativeConstruct();

	player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		auto statusComp = player->GetStatusComponent();
		if (statusComp)
		{
			ProgressBar_HP->SetPercent(statusComp->GetHPPercent());
			ProgressBar_SP->SetPercent(statusComp->GetSPPercent());
		}
	}
}

void UMainWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime) {

	Super::NativeTick(MyGeometry, InDeltaTime);
	if (player != nullptr)
	{
		auto statusComp = player->GetStatusComponent();
		if (statusComp)
		{
			ProgressBar_HP->SetPercent(FMath::FInterpTo(ProgressBar_HP->Percent, statusComp->GetHPPercent(), InDeltaTime, 5.f));
			ProgressBar_SP->SetPercent(FMath::FInterpTo(ProgressBar_SP->Percent, statusComp->GetSPPercent(), InDeltaTime, 5.f));
		}
	}
}