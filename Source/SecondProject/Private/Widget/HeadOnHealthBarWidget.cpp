// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/HeadOnHealthBarWidget.h"
#include "Components/ProgressBar.h"

void UHeadOnHealthBarWidget::SetHPPercent(float f)
{
		ProgressBar_HP->SetPercent(f);
}
