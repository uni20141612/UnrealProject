// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/AI/Task/Task_Turn.h"
#include "Character/Monster.h"
#include "Character/Monster/Controller/MonsterController.h"

#include "BehaviorTree/BlackboardComponent.h"

UTask_Turn::UTask_Turn()
{
	NodeName = "Turn";
	BlackboardKey.SelectedKeyName = "Target";

	bNotifyTick = true;
}

EBTNodeResult::Type UTask_Turn::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto aiCon = OwnerComp.GetAIOwner();
	if (aiCon != nullptr)
	{
		monster = aiCon->GetPawn();
		target = Cast<AActor>(aiCon->GetBlackboardComponent()->GetValueAsObject(GetSelectedBlackboardKey()));

		return EBTNodeResult::InProgress;
	}

	return EBTNodeResult::Failed;
}

void UTask_Turn::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (target != nullptr && monster != nullptr)
	{
		auto targetRot = (target->GetActorLocation() - monster->GetActorLocation()).Rotation();
		targetRot.Roll = monster->GetActorRotation().Roll;
		targetRot.Pitch = monster->GetActorRotation().Pitch;

		auto lerpRot = FMath::RInterpTo(monster->GetActorRotation(), targetRot, DeltaSeconds, interpSpeed);
		monster->SetActorRotation(lerpRot);

		if (FMath::Abs(targetRot.Yaw - lerpRot.Yaw) <= AcceptSize)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		/*
		auto rot = (target->GetActorLocation() - monster->GetActorLocation()).Rotation();
		rot.Roll = monster->GetActorRotation().Roll;
		rot.Pitch = monster->GetActorRotation().Pitch;
		monster->SetActorRotation(rot);

		if (FMath::Abs(rot.Yaw - monster->GetActorRotation().Yaw) <= AcceptSize)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
		*/
	}
}