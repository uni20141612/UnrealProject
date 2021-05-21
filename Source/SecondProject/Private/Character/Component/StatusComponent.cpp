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
	//RunRecoverStaminaTimer();
	RunRecoverHPTimer();
}
/*
void UStatusComponent::RunRecoverStaminaTimer()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(recoverStaminaTimerHandle) == false)
	{
		GetWorld()->GetTimerManager().SetTimer(
			recoverStaminaTimerHandle,
			this,
			&UStatusComponent::RecoverStamina, 0.25f, true);
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
*/

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
		GetWorld()->GetTimerManager().SetTimer(recoverStaminaByTimeTimerHandle, recoverStaminaTimerDel, 0.3f, true);
	}
}

/*
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
*/

void UStatusComponent::RecoverHP()
{
	HP = FMath::Clamp(HP + 1, 0.f, MaxHP);
}

void UStatusComponent::RemoveHP()
{
	HP = FMath::Clamp(HP - 1, 0.f, MaxHP);
}