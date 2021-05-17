// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Potion.h"
#include "Character/BaseCharacter.h"
#include "Character/Component/StatusComponent.h"

#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"

void APotion::UseItem(AActor* target)
{
	if (target != nullptr)
	{
		auto user = Cast<ABaseCharacter>(target);
		auto statComp = user->GetStatusComponent();

		auto info = GetItemInformation<FPotionInformation>();
		if (info != nullptr)
		{
			if (info->useMontage != nullptr)
			{
				user->GetMesh()->GetAnimInstance()->Montage_Play(info->useMontage);
			}

			if (info->useParticle != nullptr)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), info->useParticle, target->GetActorLocation());
			}

			if (info->useSound != nullptr)
			{
				UGameplayStatics::SpawnSoundAtLocation(GetWorld(), info->useSound, target->GetActorLocation());
			}

			statComp->SetHP(statComp->GetHP() + info->hp);
			statComp->SetSP(statComp->GetSP() + info->sp);
		}
	}
}
