// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/AI/Task/Task_PlayRandomAnimation.h"
#include "Character/Monster.h"
#include "Character/Monster/Controller/MonsterController.h"

#include "TimerManager.h"

UTask_PlayRandomAnimation::UTask_PlayRandomAnimation()
{
	NodeName = "PlayRandomAnimation";
	BlackboardKey.SelectedKeyName = "SelfActor";
}

EBTNodeResult::Type UTask_PlayRandomAnimation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto monster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());
	if (monster == nullptr || Montages.Num() == 0)
	{
		return EBTNodeResult::Failed;
	}
	BT_Comp = &OwnerComp;
	auto montage = Montages[FMath::RandRange(0, Montages.Num() - 1)];
	auto len = monster->GetMesh()->GetAnimInstance()->Montage_Play(montage);
	FTimerHandle montageTimerHandle;
	monster->GetWorldTimerManager().SetTimer(montageTimerHandle, this, &UTask_PlayRandomAnimation::FinishTask, len);

	return EBTNodeResult::InProgress;
}

void UTask_PlayRandomAnimation::FinishTask()
{
	FinishLatentTask(*BT_Comp, EBTNodeResult::Succeeded);
}
