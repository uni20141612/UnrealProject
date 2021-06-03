// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Component/StatusComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "TimerManager.h"

// Sets default values for this component's properties
UStatusComponent::UStatusComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts
void UStatusComponent::BeginPlay()
{
	Super::BeginPlay();
	
	RunRecoverHPTimer();
}

void UStatusComponent::RunRecoverHPTimer()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(recoverHPTimerHandle) == false)
	{
		GetWorld()->GetTimerManager().SetTimer(
			recoverHPTimerHandle,
			this,
			&UStatusComponent::RecoverHP, 1.f, true);
	}
}

void UStatusComponent::PauseRecoverHPTimer()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(recoverHPTimerHandle) == true)
	{
		GetWorld()->GetTimerManager().PauseTimer(recoverHPTimerHandle);
	}
}

void UStatusComponent::SetHP(float value)
{
	HP = FMath::Clamp(value, 0.f, MaxHP);
}

void UStatusComponent::SetSP(float value)
{
	SP = FMath::Clamp(value, 0.f, MaxSP);
}

// Called every frame
void UStatusComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UStatusComponent::CheckStamina(float value)
{
	if (SP > value)
	{
		return true;
	}
	return false;
}

void UStatusComponent::RecoverStamina(float value)
{
	SP = FMath::Clamp(SP + value, 0.f, MaxSP);
}

void UStatusComponent::RemoveStamina(float value)
{
	SP = FMath::Clamp(SP - value, 0.f, MaxSP);
}

void UStatusComponent::PauseRecoverStaminaPerTime()
{
	PauseStaminaOrder.Push(0);
	if (GetWorld()->GetTimerManager().IsTimerActive(recoverStaminaByTimeTimerHandle) == true)
	{
		GetWorld()->GetTimerManager().PauseTimer(recoverHPTimerHandle);
	}
}

void UStatusComponent::ResumeRecoverStaminaPerTime()
{
	if (PauseStaminaOrder.Num() > 0)
	{
		PauseStaminaOrder.Pop();
	}

	if (PauseStaminaOrder.Num() == 0)
	{
		GetWorld()->GetTimerManager().UnPauseTimer(recoverStaminaByTimeTimerHandle);
	}
}

void UStatusComponent::RecoverStaminaPerTime(float value)
{
	if (GetWorld()->GetTimerManager().IsTimerActive(recoverStaminaByTimeTimerHandle) == false)
	{
		FTimerDelegate recoverStaminaTimerDel = FTimerDelegate::CreateUObject(this, &UStatusComponent::RecoverStamina, value);
		GetWorld()->GetTimerManager().SetTimer(recoverStaminaByTimeTimerHandle, recoverStaminaTimerDel, 0.1f, true);
	}
}

void UStatusComponent::RecoverHP()
{
	HP = FMath::Clamp(HP + 1, 0.f, MaxHP);
}