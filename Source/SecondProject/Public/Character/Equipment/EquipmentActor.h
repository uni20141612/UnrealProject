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

	USkeletalMeshComponent* getSkeletalMesh() { return skeletalMesh; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	UFUNCTION()
		void OnBeginOverlapEvent(AActor* OverlappedActor, AActor* OtherActor);

protected:
	UPROPERTY(VisibleAnywhere)
		class USkeletalMeshComponent* skeletalMesh;
	UPROPERTY(EditAnywhere)
		class UParticleSystem* hitParticle;
	UPROPERTY(EditAnywhere)
		class USoundBase* hitSound;
	//이미 한번 피격당한 대상들을 저장할 배열입니다.
	UPROPERTY()
		TArray<AActor*> hitActors;

};
