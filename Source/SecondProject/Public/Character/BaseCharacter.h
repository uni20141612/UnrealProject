// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "BaseCharacter.generated.h"

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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void UpdateHeadOnHPBarWidget();

public:
	UPROPERTY()
		TArray<AActor*> hitActors;

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class UStatusComponent* statusComponent;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class UWidgetComponent* widgetComponent;
};
