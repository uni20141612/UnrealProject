// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/Controller/MonsterController.h"
#include "Character/Monster.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Controller/CustomController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "BrainComponent.h"
#include "Perception/AIPerceptionComponent.h"

AMonsterController::AMonsterController()
{
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
}

void AMonsterController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	OwnerMonster = Cast<AMonster>(InPawn);
	if (OwnerMonster != nullptr)
	{
		OnChangeMoveState.AddUniqueDynamic(OwnerMonster, &AMonster::OnChangeMoveStateEvent);
		OwnerMonster->OnDeath.AddUniqueDynamic(this, &AMonsterController::StopBehaviorTree);
		PerceptionComponent->OnTargetPerceptionUpdated.AddUniqueDynamic(this, &AMonsterController::OnTargetPerceptionUpdatedEvent);

		if (OwnerMonster->AITree != nullptr)
		{
			RunBehaviorTree(OwnerMonster->AITree);
			
			if (OwnerMonster->patrolLocation_A != nullptr && OwnerMonster->patrolLocation_B != nullptr)
			{
				GetBlackboardComponent()->SetValueAsVector("PatrolA", OwnerMonster->patrolLocation_A->GetActorLocation());
				GetBlackboardComponent()->SetValueAsVector("PatrolB", OwnerMonster->patrolLocation_B->GetActorLocation());
			}
		}
	}
}

void AMonsterController::StopBehaviorTree()
{
	BrainComponent->StopLogic("Death");
}

void AMonsterController::OnTargetPerceptionUpdatedEvent(AActor* Actor, FAIStimulus Stimulus)
{
	if (Actor->IsA<APlayerCharacter>())
	{
		auto player = Cast<APlayerCharacter>(Actor);
		auto controller = Cast<ACustomController>(player->GetController());
		if (controller != nullptr)
		{
			if (Cast<AMonster>(GetPawn())->bBoss == true)
			{
				controller->AddBossWidget(Cast<AMonster>(GetPawn()));
			}
		}

		if (GetBlackboardComponent()->GetValueAsObject("Target") == nullptr)
		{
			GetBlackboardComponent()->SetValueAsObject("Target", Actor);
		}
	}
}
