// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "BaseCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS()
class SECONDPROJECT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

	class UStatusComponent* GetStatusComponent() { return statusComponent; }

	UFUNCTION()
		void SetSpectator();
	UFUNCTION()
		void SetRagdoll();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
	void UpdateHeadOnHPBarWidget();

public:
	UPROPERTY()
		TArray<AActor*> hitActors;

	FOnDeath OnDeath;

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class UStatusComponent* statusComponent;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class UWidgetComponent* widgetComponent;
};
