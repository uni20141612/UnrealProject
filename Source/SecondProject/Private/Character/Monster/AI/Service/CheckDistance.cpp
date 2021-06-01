// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/AI/Service/CheckDistance.h"
#include "Character/Monster/Controller/MonsterController.h"
#include "Character/Monster.h"

#include "BehaviorTree/BlackboardComponent.h"

UCheckDistance::UCheckDistance()
{
	NodeName = "CheckDistance";
	BlackboardKey.SelectedKeyName = "Distance";
}

void UCheckDistance::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	auto AICon = OwnerComp.GetAIOwner();
	if (AICon != nullptr)
	{
		auto target = Cast<AActor>(AICon->GetBlackboardComponent()->GetValueAsObject("Target"));
		if (target != nullptr)
		{
			auto distance = AICon->GetPawn()->GetDistanceTo(target);
			AICon->GetBlackboardComponent()->SetValueAsFloat("Distance", distance);
		}
	}
}