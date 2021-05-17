// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Equipment/EquipmentActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Character/Monster.h"
#include "Character/Player/PlayerCharacter.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEquipmentActor::AEquipmentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("skeletalMesh"));
	RootComponent = skeletalMesh;

	skeletalMesh->SetCollisionProfileName("Weapon");
	skeletalMesh->SetGenerateOverlapEvents(true);
	skeletalMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AEquipmentActor::AddHitActor(AActor* hitActor)
{
	hitActors.AddUnique(hitActor);
}

void AEquipmentActor::ClearHitActors()
{
	hitActors.Empty();
}

// Called every frame
void AEquipmentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called when the game starts or when spawned
void AEquipmentActor::BeginPlay()
{
	Super::BeginPlay();
	//생성자에서 작동 안되는 경우 있음!
	OnActorBeginOverlap.AddUniqueDynamic(this, &AEquipmentActor::OnBeginOverlapEvent);
	
}

void AEquipmentActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//생성자에서 작동 안되는 경우 있음!
	//OnActorBeginOverlap.AddUniqueDynamic(this, &AEquipmentActor::OnBeginOverlapEvent);
}

void AEquipmentActor::OnBeginOverlapEvent(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->IsA<AMonster>() == true)
	{
		if (hitActors.Contains(OtherActor) == false)
		{
			UE_LOG(LogTemp, Log, TEXT("%s"), *OtherActor->GetName());			
			OtherActor->TakeDamage(10.f, FDamageEvent(), nullptr, this);
			hitActors.AddUnique(OtherActor);

			//라인트레이스가 검출할 오브젝트 타입 설정
			TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
			ObjectTypes.Emplace(UEngineTypes::ConvertToObjectType(ECC_GameTraceChannel2));
			//라인트레이스에서 검출하면 이 배열에 저장
			TArray<FHitResult> hits;

			//라인트레이스를 그림, Multi형태이기 때문에 중간에 무엇이 있더라도 멈추지않고 그림
			if (UKismetSystemLibrary::LineTraceMultiForObjects(this,
				//트레이스 시작지점
				GetActorLocation(),
				//트레이스 끝지점
				OtherActor->GetActorLocation(),
				//트레이스가 감지해야할 오브젝트 타입 배열
				ObjectTypes,
				//복잡한 콜리전 검사를 할 것인가?
				false,
				//이 트레이스가 무시해야 할 대상
				TArray<AActor*>(),
				//트레이스 디버그 타입
				EDrawDebugTrace::ForOneFrame,
				//트레이스가 검출할 정보를 저장할 Hit 구조체 배열
				hits,
				//자기자신을 무시할 것인가?
				true))
			{
				for (auto i = 0; i < hits.Num(); ++i)
				{
					if (hits[i].GetActor() == OtherActor)
					{
						if (hitParticle != nullptr)
						{
							//파티클 스폰
							UGameplayStatics::SpawnEmitterAtLocation(this, hitParticle, hits[i].Location);
						}
						if (hitSound != nullptr)
						{
							//사운드를 재생합니다
							UGameplayStatics::SpawnSoundAtLocation(this, hitSound, hits[i].Location);
						}

						auto player = Cast<APlayerCharacter>(GetOwner());
						if (player != nullptr)
						{
							player->ShowDamage(10.f, hits[i].Location);
						}
					}
				}
			}
		}
	}
}