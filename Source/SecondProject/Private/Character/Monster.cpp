// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster.h"
#include "Character/Monster/Controller/MonsterController.h"
#include "Character/Player/Controller/CustomController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Component/StatusComponent.h"
#include "Components/CapsuleComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

AMonster::AMonster()
{
	GetCapsuleComponent()->SetCollisionProfileName("Monster");
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	SetGenericTeamId(FGenericTeamId(1));
}

void AMonster::DropItem()
{
	if (dropTable != nullptr)
	{
		TArray<const FDropTable*> dropitems;
		dropTable->GetAllRows("", dropitems);

		float sum = 0;
		for (auto value : dropitems)
		{
			sum += value->percent;
			if (sum > 100.f) { return; }
		}
		auto dropCount = FMath::RandRange(1, 5);
		UE_LOG(LogTemp, Warning, TEXT("dropCount : %d"), dropCount);
		for (auto i = 0; i < dropCount; ++i)
		{
			auto percent = FMath::RandRange(0.f, 100.f);
			UE_LOG(LogTemp, Log, TEXT("Percent : %f"), percent);
			float acc = 0.f;
			for (auto value : dropitems)
			{
				if (percent < acc || percent >= acc + value->percent)
				{
					acc += value->percent;
					continue;
				}
				else
				{
					auto spawnTr = FTransform(GetActorLocation() + FMath::RandPointInBox(FBox(FVector(1, 1, 0), FVector(10, 10, 0))));
					auto spawnItem = UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(),
						value->item.Get(), spawnTr, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);

					UGameplayStatics::FinishSpawningActor(spawnItem, spawnTr);

					UE_LOG(LogTemp, Log, TEXT("Value->Percent : %f     %f"), value->percent, percent);
					UE_LOG(LogTemp, Log, TEXT("%s"), *spawnItem->GetName());
					break;
				}
			}
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
	OnDeath.AddUniqueDynamic(this, &AMonster::RemoveBossWidget);
	
}

void AMonster::RemoveBossWidget()
{
	if (bBoss)
	{
		auto aiCon = Cast<AMonsterController>(GetController());
		if (aiCon)
		{
			auto target = aiCon->GetBlackboardComponent()->GetValueAsObject("Target");
			if (target != nullptr)
			{
				auto con = Cast<ACustomController>(Cast<ACharacter>(target)->GetController());
				if (con)
				{
					con->RemoveBossWidget();
				}
			}
		}
	}
}
