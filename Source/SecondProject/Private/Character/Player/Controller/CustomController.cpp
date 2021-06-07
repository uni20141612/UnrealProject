// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Player/Controller/CustomController.h"

#include "Blueprint/UserWidget.h"//<<요 안에 위젯 생성 함수 있음.
#include "Widget/InventoryWidget.h"
#include "Widget/BossWidget.h"
#include "Character/Monster.h"

void ACustomController::SetLockOnWidgetPos(AActor* target)
{
	if (lockOnWidget != nullptr && target != nullptr)
	{
		FVector2D screenPos;
		if (ProjectWorldLocationToScreen(target->GetActorLocation(), screenPos))
		{
			screenPos.X -= 37.5;
			screenPos.Y -= 37.5;
			lockOnWidget->SetPositionInViewport(screenPos);
		}
	}
}

void ACustomController::SetVisibilityLockOnWidget(ESlateVisibility newVisible)
{
	if (lockOnWidget != nullptr)
	{
		lockOnWidget->SetVisibility(newVisible);
	}
}

void ACustomController::ShowInventory()
{
	if (inventoryWidget == nullptr)
	{
		if (inventoryWidgetClass != nullptr)
		{
			inventoryWidget = CreateWidget<UInventoryWidget>(this, inventoryWidgetClass.Get());
			inventoryWidget->AddToViewport();
			inventoryWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	if (inventoryWidget->GetVisibility() == ESlateVisibility::Hidden)
	{
		bShowMouseCursor = true;
		SetInputMode(FInputModeGameAndUI());
		inventoryWidget->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		bShowMouseCursor = false;
		SetInputMode(FInputModeGameOnly());
		inventoryWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

void ACustomController::AddBossWidget(AMonster* monster)
{
	if (monster != nullptr)
	{
		if (bossWidgetClass != nullptr)
		{
			if (bossWidget != nullptr && bossWidget->IsInViewport() == false)
			{
				bossWidget->AddToViewport();
			}
			if (bossWidget == nullptr)
			{
				bossWidget = CreateWidget<UBossWidget>(this, bossWidgetClass.Get());
				bossWidget->SetMonster(monster);
				bossWidget->AddToViewport();
			}
		}
	}
}

void ACustomController::RemoveBossWidget()
{
	if (bossWidget)
	{
		bossWidget->RemoveFromParent();
	}
}

UItemInformationWidget* ACustomController::GetItemInformationWidget()
{
	if (inventoryWidget != nullptr)
	{
		return inventoryWidget->GetItemInformation();
	}
	return nullptr;
}

void ACustomController::BeginPlay()
{
	Super::BeginPlay();

	if (mainWidgetClass != nullptr)
	{
		mainWidget = CreateWidget<UUserWidget>(this, mainWidgetClass.Get());
		if (mainWidget != nullptr) 
		{
			mainWidget->AddToViewport();
		}
	}

	if (lockOnWidgetClass != nullptr) 
	{
		lockOnWidget = CreateWidget<UUserWidget>(this, lockOnWidgetClass.Get());
		if (lockOnWidget != nullptr) 
		{
			lockOnWidget->AddToViewport();
			lockOnWidget->SetDesiredSizeInViewport(FVector2D(75, 75));
			lockOnWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}
