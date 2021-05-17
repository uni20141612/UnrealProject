// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/PlayerInformationWidget.h"
#include "Character/Component/StatusComponent.h"

#include "Components/TextBlock.h"

void UPlayerInformationWidget::SetPlayerInformation(UStatusComponent* statComp)
{
	if (statComp != nullptr)
	{
		FString hp = FString::FormatAsNumber(statComp->GetHP()) + "/" + FString::FormatAsNumber(statComp->GetMaxHP());
		FString sp = FString::FormatAsNumber(statComp->GetSP()) + "/" + FString::FormatAsNumber(statComp->GetMaxSP());

		TextBlock_CurrentHP->SetText(FText::FromString(hp));
		TextBlock_CurrentSP->SetText(FText::FromString(sp));
	}
}
