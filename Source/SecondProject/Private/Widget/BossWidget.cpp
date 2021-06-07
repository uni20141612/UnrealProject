// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/BossWidget.h"
#include "Character/Component/StatusComponent.h"
#include "Character/Monster.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UBossWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (monster != nullptr)
	{
		auto statusComp = monster->GetStatusComponent();
		if (statusComp != nullptr)
		{
			BossHP->SetPercent(statusComp->GetHPPercent());
		}
	}
}

void UBossWidget::SetMonster(AMonster* m)
{
	monster = m;
	TextBlock_BossName->SetText(FText::FromName(monster->monster_Name));
}
