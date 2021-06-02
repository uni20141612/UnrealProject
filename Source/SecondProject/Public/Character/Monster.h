// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"

#include "Monster.generated.h"

UENUM(BlueprintType)
enum class EAICombatState : uint8
{
	APPROCH,
	ATTACK,
	BEWHARE,

	AICOMBAT_MAX
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

public:
	UPROPERTY(EditAnywhere)
		AActor* patrolLocation_A;
	UPROPERTY(EditAnywhere)
		AActor* patrolLocation_B;

	UPROPERTY(EditAnywhere)
		class UBehaviorTree* AITree;
};
