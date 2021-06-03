// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/AI/Service/FindPlayer.h"
#include "Character/Monster/Controller/MonsterController.h"
#include "Character/Monster.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/KismetSystemLibrary.h"

UFindPlayer::UFindPlayer()
{
	NodeName = "FindPlayer";
}

void UFindPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	auto AICon = OwnerComp.GetAIOwner();
	FHitResult hit;
	if (UKismetSystemLibrary::SphereTraceSingleForObjects(AICon->GetWorld(),
		AICon->GetPawn()->GetActorLocation(),
		AICon->GetPawn()->GetActorLocation() + 1,
		radius, ObjectTypes, false, TArray<AActor*>(), EDrawDebugTrace::ForOneFrame, hit, true))
	{
		//감지한 플레이어와 몬스터 사이에 아무것도 없으면 (LineTrace)  플레이어를 인식
		TArray<TEnumAsByte<EObjectTypeQuery>> objTypes;
		objTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldStatic));
		objTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldDynamic));
		FHitResult outHit;
		if (UKismetSystemLibrary::LineTraceSingleForObjects(AICon->GetWorld(), AICon->GetPawn()->GetActorLocation(), hit.GetActor()->GetActorLocation(),
			objTypes, false, TArray<AActor*>(), EDrawDebugTrace::ForOneFrame, outHit, true))
		{
			AICon->GetBlackboardComponent()->SetValueAsObject(GetSelectedBlackboardKey(), hit.GetActor());
		}
	}
}