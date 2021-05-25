// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/PlayerInformationWidget.h"
#include "Character/Component/StatusComponent.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/TextBlock.h"

void UPlayerInformationWidget::NativeConstruct()
{
	Super::NativeConstruct();

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		player->GetInventoryComponent()->EquipEvent.AddUniqueDynamic(this, &UPlayerInformationWidget::SetPlayerInformation);
		player->GetInventoryComponent()->UnEquipEvent.AddUniqueDynamic(this, &UPlayerInformationWidget::SetPlayerInformation);
	}
}

void UPlayerInformationWidget::SetPlayerInformation(UStatusComponent* statComp)
{
	if (statComp != nullptr)
	{
		FString hp = FString::FormatAsNumber(statComp->GetHP()) + "/" + FString::FormatAsNumber(statComp->GetMaxHP());
		FString sp = FString::FormatAsNumber(statComp->GetSP()) + "/" + FString::FormatAsNumber(statComp->GetMaxSP());

		TextBlock_CurrentHP->SetText(FText::FromString(hp));
		TextBlock_CurrentSP->SetText(FText::FromString(sp));

		TextBlock_Dam->SetText(FText::AsNumber((statComp->GetDam())));
		TextBlock_Def->SetText(FText::AsNumber((statComp->GetDef())));
	}
}
