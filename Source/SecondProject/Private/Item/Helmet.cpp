// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Helmet.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/SkeletalMeshComponent.h"

void AHelmet::UseItem(AActor* target)
{
	if (target != nullptr)
	{
		auto player = Cast<APlayerCharacter>(target);
	}
}