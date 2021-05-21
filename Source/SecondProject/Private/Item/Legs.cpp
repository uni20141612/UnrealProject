// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Legs.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/SkeletalMeshComponent.h"

void ALegs::UseItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
	}
}