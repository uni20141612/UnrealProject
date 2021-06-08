// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericTeamAgentInterface.h"

#include "BaseCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS()
class SECONDPROJECT_API ABaseCharacter : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

	/** Retrieve team identifier in form of FGenericTeamId */
	virtual FGenericTeamId GetGenericTeamId() const { return myTeam; }

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

	/** Assigns Team Agent to given TeamID */
	virtual void SetGenericTeamId(const FGenericTeamId& TeamID) { myTeam = TeamID; }

public:
	UPROPERTY()
		TArray<AActor*> hitActors;

	FOnDeath OnDeath;

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class UStatusComponent* statusComponent;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class UWidgetComponent* widgetComponent;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class UAIPerceptionStimuliSourceComponent* perceptionSourceComponent;

	FGenericTeamId myTeam;
};
