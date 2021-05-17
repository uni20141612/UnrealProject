// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Animation/NotifyState/CreateLinetraceNotifyState.h"
#include "Character/BaseCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

void UCreateLinetraceNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp != nullptr)
	{
		owner = Cast<ABaseCharacter>(MeshComp->GetOwner());
		if (owner != nullptr)
		{
			owner->hitActors.Empty();
		}
	}
}

void UCreateLinetraceNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	radius = 30.f;
	damage = 10.f;
	if (MeshComp != nullptr)
	{
		//원형 트레이스를 그리고 걸린 타겟이 있다면 피해를 주세요
		//MeshComp->GetSocketLocation("swordEnd");
		TArray<FHitResult> hits;
		ObjectTypes.Emplace(UEngineTypes::ConvertToObjectType(ECC_GameTraceChannel1));
		if (UKismetSystemLibrary::SphereTraceMultiForObjects(
			MeshComp->GetWorld(),
			MeshComp->GetSocketLocation(startSocket),
			MeshComp->GetSocketLocation(endSocket),
			radius,
			ObjectTypes,
			false,
			TArray<AActor*>(),
			EDrawDebugTrace::ForOneFrame,
			hits,
			true))
		{
			for (auto i = 0; i < hits.Num(); i++)
			{
				if (owner->hitActors.Contains(hits[i].GetActor()) == false)
				{
					owner->hitActors.AddUnique(hits[i].GetActor());
					hits[i].GetActor()->TakeDamage(damage, 
						FPointDamageEvent(damage, hits[i], FVector(), UDamageType::StaticClass()),
						Cast<ACharacter>(owner)->GetController(),
						MeshComp->GetOwner());

					if (hitParticle != nullptr)
					{
						UGameplayStatics::SpawnEmitterAtLocation(MeshComp->GetWorld(), hitParticle, hits[i].Location);
					}
				}
			}
		}
		
	}
}

void UCreateLinetraceNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
}
