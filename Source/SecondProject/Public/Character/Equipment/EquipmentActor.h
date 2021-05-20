// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "EquipmentActor.generated.h"

UCLASS()
class SECONDPROJECT_API AEquipmentActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEquipmentActor();

	void AddHitActor(AActor* hitActor);
	void ClearHitActors();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//�÷��̾� Ű�� �ش��ϴ� �Լ��� ȣ���� ��.
	virtual void HitProcess(const FVector& hitLocation);
	virtual void Attack() { };
	virtual void Roll() { };
	virtual void Guard() { };
	virtual bool GuardProcess(const FVector& hitLocation) { return false; };

	USkeletalMeshComponent* getSkeletalMesh() { return skeletalMesh; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	class UInventoryComponent* GetInventoryComponent();
	class UStatusComponent* GetStatusComponent();
	float PlayMontage(class UAnimMontage* montage);
	bool IsPlayingAnyMontage();

	UFUNCTION()
		void OnBeginOverlapEvent(AActor* OverlappedActor, AActor* OtherActor);

protected:
	UPROPERTY(VisibleAnywhere)
		class USkeletalMeshComponent* skeletalMesh;
	UPROPERTY(EditAnywhere)
		class UParticleSystem* hitParticle;
	UPROPERTY(EditAnywhere)
		class USoundBase* hitSound;
	//�̹� �ѹ� �ǰݴ��� ������ ������ �迭�Դϴ�.
	UPROPERTY()
		TArray<AActor*> hitActors;

};
