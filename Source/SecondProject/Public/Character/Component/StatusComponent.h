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
	/*
	void RunRecoverStaminaTimer();
	void PauseRecoverStamina();
	void RunRemoveStaminaTimer();
	void PauseRemoveStaminaTimer();
	*/
	void RunRecoverHPTimer();
	void PauseRecoverHPTimer();

	void SetHP(float value);
	void SetSP(float value);
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool CheckStamina(float value);

	void RecoverStamina(float value);
	void RemoveStamina(float value);
	void PauseRecoverStaminaPerTime();
	void ResumeRecoverStaminaPerTime();
	void RecoverStaminaPerTime(float value);

	const float& GetHP() { return HP; }
	const float& GetMaxHP() { return MaxHP; }
	const float& GetSP() { return SP; }
	const float& GetMaxSP() { return MaxSP; }

	const float GetHPPercent() { return HP / (float)MaxHP; }
	const float GetSPPercent() { return SP / (float)MaxSP; }

protected:
	//void RecoverStamina();
	//void RemoveStamina();
	void RecoverHP();
	void RemoveHP();

public:
	//n초당 sp를 회복시키는 타이머 핸들
	FTimerHandle recoverStaminaByTimeTimerHandle;

protected:
	UPROPERTY(EditAnywhere)
		float HP;
	UPROPERTY(EditAnywhere)
		float MaxHP = 100;
	UPROPERTY(EditAnywhere)
		float SP;
	UPROPERTY(EditAnywhere)
		float MaxSP = 100;
	UPROPERTY(EditAnywhere)
		float AttackSpeed = 1.f;

	//sp 회복중지요청이 들어오면 저장합니다.
	TArray<int32> PauseStaminaOrder;
	UPROPERTY()
		TArray<FTimerHandle> PauseRecoverStaminaTimerHandles;

	//FTimerHandle recoverStaminaTimerHandle;
	//FTimerHandle removeStaminaTimerHandle;
	FTimerHandle recoverHPTimerHandle;
	FTimerHandle removeHPTimerHandle;

};
