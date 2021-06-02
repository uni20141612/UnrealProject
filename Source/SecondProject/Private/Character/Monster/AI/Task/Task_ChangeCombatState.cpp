// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/AI/Task/Task_ChangeCombatState.h"
#include "Character/Monster/Controller/MonsterController.h"

#include "BehaviorTree/BlackboardComponent.h"

UTask_ChangeCombatState::UTask_ChangeCombatState()
{
	NodeName = "ChangeCombatState";
	BlackboardKey.SelectedKeyName = "CombatState";
	bNotifyTick = false;
}

EBTNodeResult::Type UTask_ChangeCombatState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto aiCon = OwnerComp.GetAIOwner();
	if (aiCon != nullptr)
	{
		if (newStates.Num() > 0)
		{
			auto randValue = FMath::RandRange(0, newStates.Num() - 1);
			aiCon->GetBlackboardComponent()->SetValueAsEnum(GetSelectedBlackboardKey(), (uint8)newStates[randValue]);
		}
		else
		{
			auto randValue = FMath::RandRange(0, (int32)EAICombatState::AICOMBAT_MAX - 1);
			aiCon->GetBlackboardComponent()->SetValueAsEnum(GetSelectedBlackboardKey(), (uint8)randValue);
		}
	}

	return EBTNodeResult::Succeeded;
}
