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

	// ...
}

// Called when the game starts
void UStatusComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	RunRecoverStaminaTimer();
	RunRecoverHPTimer();
}

void UStatusComponent::RunRecoverStaminaTimer()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(recoverStaminaTimerHandle) == false)
	{
		GetWorld()->GetTimerManager().SetTimer(
			recoverStaminaTimerHandle,
			this,
			&UStatusComponent::RecoverStamina, 0.5f, true);
	}
}

void UStatusComponent::PauseRecoverStamina()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(recoverStaminaTimerHandle) == true)
	{
		GetWorld()->GetTimerManager().PauseTimer(recoverStaminaTimerHandle);
	}
}

void UStatusComponent::RunRemoveStaminaTimer()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(removeStaminaTimerHandle) == false)
	{
		GetWorld()->GetTimerManager().SetTimer(
			removeStaminaTimerHandle,
			this,
			&UStatusComponent::RemoveStamina, 0.5f, true);
	}
}

void UStatusComponent::PauseRemoveStaminaTimer()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(removeStaminaTimerHandle) == true)
	{
		GetWorld()->GetTimerManager().PauseTimer(removeStaminaTimerHandle);
	}
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

void UStatusComponent::SetHP(int32 value)
{
	HP = FMath::Clamp(value, 0, MaxHP);
}

void UStatusComponent::SetSP(int32 value)
{
	SP = FMath::Clamp(value, 0, MaxSP);
}

// Called every frame
void UStatusComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UStatusComponent::CheckStamina(int32 value)
{
	if (SP > value)
	{
		return true;
	}
	return false;
}

void UStatusComponent::RecoverStamina()
{
	SP = FMath::Clamp(SP + 2, 0, MaxSP);
	//UE_LOG(LogTemp, Log, TEXT("%d"), SP);
}

void UStatusComponent::RemoveStamina()
{
	SP = FMath::Clamp(SP - 2, 0, MaxSP);
	if (SP == 0)
	{
		Cast<APlayerCharacter>(GetOwner())->StopRun();
	}
}

void UStatusComponent::RecoverHP()
{
	HP = FMath::Clamp(HP + 1, 0, MaxHP);
}

void UStatusComponent::RemoveHP()
{
	HP = FMath::Clamp(HP - 1, 0, MaxHP);
}