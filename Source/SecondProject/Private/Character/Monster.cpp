// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster.h"
#include "Components/CapsuleComponent.h"

#include "GameFramework/CharacterMovementComponent.h"

AMonster::AMonster()
{
	GetCapsuleComponent()->SetCollisionProfileName("Monster");
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}