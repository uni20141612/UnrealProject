// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "StatusComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SECONDPROJECT_API UStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatusComponent();
	// Called when the game starts
	virtual void BeginPlay() override;

	void RunRecoverStaminaTimer();
	void PauseRecoverStamina();
	void RunRemoveStaminaTimer();
	void PauseRemoveStaminaTimer();
	void RunRecoverHPTimer();
	void PauseRecoverHPTimer();

	void SetHP(int32 value);
	void SetSP(int32 value);
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool CheckStamina(int32 value);

	const int32& GetHP() { return HP; }
	const int32& GetMaxHP() { return MaxHP; }
	const int32& GetSP() { return SP; }
	const int32& GetMaxSP() { return MaxSP; }

	const float GetHPPercent() { return HP / (float)MaxHP; }
	const float GetSPPercent() { return SP / (float)MaxSP; }

protected:
	void RecoverStamina();
	void RemoveStamina();
	void RecoverHP();
	void RemoveHP();

protected:
	UPROPERTY(EditAnywhere)
		int32 HP;
	UPROPERTY(EditAnywhere)
		int32 MaxHP = 100;
	UPROPERTY(EditAnywhere)
		int32 SP;
	UPROPERTY(EditAnywhere)
		int32 MaxSP = 100;
	UPROPERTY(EditAnywhere)
		float AttackSpeed = 1.f;

	FTimerHandle recoverStaminaTimerHandle;
	FTimerHandle removeStaminaTimerHandle;
	FTimerHandle recoverHPTimerHandle;
	FTimerHandle removeHPTimerHandle;

	UPROPERTY()
		TArray<FTimerHandle> PauseRecoverStaminaTimerHandles;
};
