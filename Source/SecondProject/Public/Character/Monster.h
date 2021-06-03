// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "Engine/DataTable.h"

#include "Monster.generated.h"

UENUM(BlueprintType)
enum class EAICombatState : uint8
{
	APPROCH,
	ATTACK,
	BEWHARE,

	AICOMBAT_MAX
};

UENUM(BlueprintType)
enum class EAIMoveState : uint8
{
	WALK,
	RUN,
	AIMove_MAX
};

USTRUCT(BlueprintType)
struct FDropTable : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class AItemActor> item;
};

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API AMonster : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	AMonster();
	UFUNCTION()
		void DropItem();

	UFUNCTION()
		void OnChangeMoveStateEvent(EAIMoveState newState);

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
		AActor* patrolLocation_A;
	UPROPERTY(EditAnywhere)
		AActor* patrolLocation_B;

	UPROPERTY(EditAnywhere)
		class UDataTable* dropTable;
	UPROPERTY(EditAnywhere)
		class UBehaviorTree* AITree;

};
