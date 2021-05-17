// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Animation/Notify/FootStepAnimNotify.h"
#include "Kismet/GameplayStatics.h"

void UFootStepAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != nullptr)
	{
		FHitResult Hit;
		FCollisionObjectQueryParams params;
		params.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldStatic);
		FCollisionQueryParams queryParams;
		queryParams.bReturnPhysicalMaterial = true;

		if (MeshComp->GetWorld()->LineTraceSingleByObjectType(Hit,
			MeshComp->GetSocketLocation(socketName),
			MeshComp->GetSocketLocation(socketName) + (MeshComp->GetSocketLocation(socketName).DownVector * 100),
			params,
			queryParams))
		{
			switch (UGameplayStatics::GetSurfaceType(Hit))
			{
			case EPhysicalSurface::SurfaceType1:
				if (metalParticle != nullptr)
				{
					UGameplayStatics::SpawnEmitterAtLocation(MeshComp->GetWorld(), metalParticle, Hit.Location);
				}
				break;
			case EPhysicalSurface::SurfaceType2:
				if (waterParticle != nullptr)
				{
					UGameplayStatics::SpawnEmitterAtLocation(MeshComp->GetWorld(), waterParticle, Hit.Location);
				}
				break;
			case EPhysicalSurface::SurfaceType3:
				if (iceParticle != nullptr)
				{
					UGameplayStatics::SpawnEmitterAtLocation(MeshComp->GetWorld(), iceParticle, Hit.Location);
				}
				break;
			default:
				if (defaultParticle != nullptr)
				{
					UGameplayStatics::SpawnEmitterAtLocation(MeshComp->GetWorld(), defaultParticle, Hit.Location);
				}
				break;
			}
		}
	}
}
