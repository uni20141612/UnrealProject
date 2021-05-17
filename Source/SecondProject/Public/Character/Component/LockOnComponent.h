// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "LockOnComponent.generated.h"

/*
* �÷��̾� ĳ������ ī�޶� ������
* ī�޶�κ��� n��ŭ�� �Ÿ����� Ʈ���̽��� ��(���� Ʈ���̽�)
* Ʈ���̽��� ���� �ɸ���(����) ī�޶��, ĳ���Ͱ� ���͸� �ٶ󺸰� ����.
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
	//�迭�� ����Ǿ��ִ� ���� ����� ������ Ÿ������ ��
	void NextLockOnTarget();
	//�迭�� ����Ǿ� �ִ� ���� ����� ������ Ÿ������ ��
	void PreLockOnTarget();

	void SetLockOn();
	void StopLockOn();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void CreateCameraTrace();
	void LookAtTarget();
	class AMonster* FindNearestTarget();
	//���� ������ ����� �÷��̾� ������ �Ÿ��� ƽ���� ����ؼ�, �ʹ� �ָ� �������� ����������Ŵ
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
