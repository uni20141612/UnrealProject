// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/AI/Task/Task_ChangeMoveState.h"
#include "Character/Monster/Controller/MonsterController.h"

UTask_ChangeMoveState::UTask_ChangeMoveState()
{
	NodeName = "ChangeMoveState";
}

EBTNodeResult::Type UTask_ChangeMoveState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto aiCon = Cast<AMonsterController>(OwnerComp.GetAIOwner());
	if (aiCon != nullptr)
	{
		aiCon->OnChangeMoveState.Broadcast(newState);

		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
