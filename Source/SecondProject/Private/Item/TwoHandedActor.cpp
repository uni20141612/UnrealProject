// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/TwoHandedActor.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Component/StatusComponent.h"

#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

void ATwoHandedActor::Attack()
{
	/*
	auto invenComp = GetInventoryComponent();
	if (invenComp != nullptr)
	{
		auto equipInfo = invenComp->GetEquippedItem();
		if (equipInfo.GetWeapon() != nullptr)
		{
			if (GetStatusComponent()->CheckStamina(equipInfo.GetWeapon()->attackSP))
			{
				GetStatusComponent()->SetSP(GetStatusComponent()->GetSP() - equipInfo.GetWeapon()->attackSP);
				PlayMontage(equipInfo.GetWeapon()->AttackMontage);
			}
		}
	}
	*/
	auto invenComp = GetInventoryComponent();
	if (invenComp != nullptr)
	{
		auto equipInfo = invenComp->GetEquippedItem();
		if (equipInfo.GetWeapon() != nullptr)
		{
			auto player = Cast<APlayerCharacter>(GetOwner());
			if(player != nullptr)
			{
				auto mesh = player->GetMesh();
				if (equipInfo.GetWeapon() != nullptr)
				{
					if (player->bReadyCombat == false)
					{
						if (equipInfo.GetWeapon()->EquipMontage != nullptr)
						{
							if (mesh->GetAnimInstance()->IsAnyMontagePlaying() == false)
							{
								mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->EquipMontage);
								player->bReadyCombat = true;
							}
						}
					}
					else
					{
						player->bAttack = true;

						if (equipInfo.GetWeapon()->AttackMontage != nullptr &&
							mesh->GetAnimInstance()->IsAnyMontagePlaying() == false)
						{
							if (GetStatusComponent()->CheckStamina(equipInfo.GetWeapon()->attackSP))
							{
								GetStatusComponent()->SetSP(GetStatusComponent()->GetSP() - equipInfo.GetWeapon()->attackSP);
								GetStatusComponent()->PauseRecoverStamina();
								mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->AttackMontage);
							}
						}
					}
				}

				if (player->bReadyCombat == false) {
					if (equipInfo.GetWeapon()->EquipMontage != nullptr)
					{
						if (mesh->GetAnimInstance()->IsAnyMontagePlaying() == false)
						{
							mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->EquipMontage);
							player->bReadyCombat = true;
						}
					}
				}
				else
				{
					player->bAttack = true;

					if (equipInfo.GetWeapon()->AttackMontage != nullptr &&
						mesh->GetAnimInstance()->IsAnyMontagePlaying() == false) {

						if (GetStatusComponent()->CheckStamina(20))
						{
							GetStatusComponent()->SetSP(GetStatusComponent()->GetSP() - 20);
							GetStatusComponent()->PauseRecoverStamina();
							mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->AttackMontage);
						}
					}
				}
			}			
		}
	}
}

void ATwoHandedActor::Roll()
{
	auto invenComp = GetInventoryComponent();
	if (invenComp != nullptr)
	{
		auto equipInfo = invenComp->GetEquippedItem();
		if (equipInfo.GetWeapon() != nullptr)
		{
			if (GetStatusComponent()->CheckStamina(equipInfo.GetWeapon()->rollSP))
			{
				GetStatusComponent()->SetSP(GetStatusComponent()->GetSP() - equipInfo.GetWeapon()->rollSP);
				PlayMontage(equipInfo.GetWeapon()->RollMontage);
			}
		}
	}
}

void ATwoHandedActor::Guard()
{
	auto invenComp = GetInventoryComponent();
	if (invenComp != nullptr)
	{
		auto equipInfo = invenComp->GetEquippedItem();
		if (equipInfo.GetWeapon() != nullptr)
		{
			auto player = Cast<APlayerCharacter>(GetOwner());
			if (player != nullptr && IsPlayingAnyMontage())
			{
				player->bGuard = true;				
				float time = PlayMontage(equipInfo.GetWeapon()->guardMontage);

				FTimerDelegate guardTimerDel = FTimerDelegate::CreateUObject(player, &APlayerCharacter::SetGuard, false);
				FTimerHandle guardTimerHandle;
				GetWorldTimerManager().SetTimer(guardTimerHandle, guardTimerDel, time, false);
			}
		}
	}
}

bool ATwoHandedActor::GuardProcess(const FVector &hitLocation)
{
	auto equipInfo = GetInventoryComponent()->GetEquippedItem();
	if (equipInfo.GetWeapon() == nullptr)
	{
		return nullptr;
	}

	//1. hitLocation과 플레이어 사이의 각도 
	FRotator rot = (hitLocation - GetActorLocation()).Rotation();
	//1번 각도와 현재 플레이어의 로테이션을 이용하면, 좌우를 알수 있음
	float yaw = (rot - GetActorRotation()).Yaw;

	//알아보기 쉽게
	if (yaw > 180)
	{
		yaw -= 360;
	}
	else if (yaw < -180)
	{
		yaw += 360;
	}
	//플레이어 앞을 기준으로
	//좌측값 : -180~0
	//우측값 : 0 ~ 180

	//좌측
	auto mesh = Cast<APlayerCharacter>(GetOwner())->GetMesh();
	if (-120 <= yaw && yaw < 120)
	{
		mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->frontGuardMontage);		
	}
	else
	{
		mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->gotHitBackMontage);
		if (equipInfo.GetWeapon()->gotHitParticle != nullptr)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), equipInfo.GetWeapon()->gotHitParticle, hitLocation);
		}
		return false;
	}

	if (equipInfo.GetWeapon()->guardParticle != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), equipInfo.GetWeapon()->guardParticle, hitLocation);
	}

	return true;
}

void ATwoHandedActor::HitProcess(const FVector& hitLocation)
{
	Super::HitProcess(hitLocation);
}
