// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Chest.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/SkeletalMeshComponent.h"

void AChest::UseItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
	}
}