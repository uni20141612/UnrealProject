// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster.h"
#include "Character/Component/StatusComponent.h"
#include "Components/CapsuleComponent.h"

#include "GameFramework/CharacterMovementComponent.h"

AMonster::AMonster()
{
	GetCapsuleComponent()->SetCollisionProfileName("Monster");
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void AMonster::DropItem()
{
	if (dropTable != nullptr)
	{
		TArray<const FDropTable*> dropitems;
		dropTable->GetAllRows("", dropitems);

		auto dropCount = FMath::RandRange(1, 5);

		for (auto i = 0; i < dropCount; ++i)
		{
			auto dropItemIndex = FMath::RandRange(0, dropitems.Num() - 1);
			auto spawndItem = GetWorld()->SpawnActor<AItemActor>(dropitems[dropItemIndex]->item.Get(), GetActorLocation(), FRotator::ZeroRotator);
		}
	}
}

void AMonster::OnChangeMoveStateEvent(EAIMoveState newState)
{
	switch (newState)
	{
	case EAIMoveState::WALK:
		GetCharacterMovement()->MaxWalkSpeed = 600.f;
		break;
	case EAIMoveState::RUN:
		GetCharacterMovement()->MaxWalkSpeed = 900.f;
		break;
	default:
		break;
	}
}

float AMonster::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
	if (statusComponent->GetHP() <= 0)
	{
		OnDeath.Broadcast();
	}

	return 0.0f;
}

void AMonster::BeginPlay()
{
	Super::BeginPlay();
	OnDeath.AddUniqueDynamic(this, &AMonster::DropItem);
}
