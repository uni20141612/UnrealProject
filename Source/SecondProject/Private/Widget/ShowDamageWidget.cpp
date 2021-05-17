// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/ShowDamageWidget.h"
#include "Components/TextBlock.h"

void UShowDamageWidget::SetDamageText(float damage)
{
	TextBlock_Damage->SetText(FText::AsNumber(damage));
}
