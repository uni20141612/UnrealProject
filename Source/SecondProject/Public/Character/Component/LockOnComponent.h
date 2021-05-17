// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "LockOnComponent.generated.h"

/*
* 플레이어 캐릭터의 카메라를 가져옴
* 카메라로부터 n만큼의 거리까지 트레이스를 쏨(원형 트레이스)
* 트레이스에 뭔가 걸리면(몬스터) 카메라와, 캐릭터가 몬스터를 바라보게 만듦.
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SECONDPROJECT_API ULockOnComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULockOnComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//배열에 저장되어있는 다음 대상을 가져와 타겟으로 함
	void NextLockOnTarget();
	//배열에 저장되어 있는 이전 대상을 가져와 타겟으로 함
	void PreLockOnTarget();

	void SetLockOn();
	void StopLockOn();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void CreateCameraTrace();
	void LookAtTarget();
	class AMonster* FindNearestTarget();
	//락온 가능한 대상들과 플레이어 사이의 거리를 틱마다 계산해서, 너무 멀리 떨어지면 락온해제시킴
	void CheckDistanceToPlayer();

public:
	bool bBlockLookAt;

protected:
	UPROPERTY()
		class APlayerCharacter* player;
	UPROPERTY()
		TArray<class AMonster*> LockOnableMonsters;
	UPROPERTY()
		class AMonster* lockOnTarget;

	UPROPERTY()
	class ACustomController* controller;

	UPROPERTY()
		int32 curIndex = 0;
	UPROPERTY(EditAnywhere)
		float distance;
	UPROPERTY(EditAnywhere)
		float radius;

	bool bLockOn;		
};
