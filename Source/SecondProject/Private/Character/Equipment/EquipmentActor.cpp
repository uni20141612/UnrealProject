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
	//�����ڿ��� �۵� �ȵǴ� ��� ����!
	OnActorBeginOverlap.AddUniqueDynamic(this, &AEquipmentActor::OnBeginOverlapEvent);
	
}

void AEquipmentActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//�����ڿ��� �۵� �ȵǴ� ��� ����!
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

			//����Ʈ���̽��� ������ ������Ʈ Ÿ�� ����
			TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
			ObjectTypes.Emplace(UEngineTypes::ConvertToObjectType(ECC_GameTraceChannel2));
			//����Ʈ���̽����� �����ϸ� �� �迭�� ����
			TArray<FHitResult> hits;

			//����Ʈ���̽��� �׸�, Multi�����̱� ������ �߰��� ������ �ִ��� �������ʰ� �׸�
			if (UKismetSystemLibrary::LineTraceMultiForObjects(this,
				//Ʈ���̽� ��������
				GetActorLocation(),
				//Ʈ���̽� ������
				OtherActor->GetActorLocation(),
				//Ʈ���̽��� �����ؾ��� ������Ʈ Ÿ�� �迭
				ObjectTypes,
				//������ �ݸ��� �˻縦 �� ���ΰ�?
				false,
				//�� Ʈ���̽��� �����ؾ� �� ���
				TArray<AActor*>(),
				//Ʈ���̽� ����� Ÿ��
				EDrawDebugTrace::ForOneFrame,
				//Ʈ���̽��� ������ ������ ������ Hit ����ü �迭
				hits,
				//�ڱ��ڽ��� ������ ���ΰ�?
				true))
			{
				for (auto i = 0; i < hits.Num(); ++i)
				{
					if (hits[i].GetActor() == OtherActor)
					{
						if (hitParticle != nullptr)
						{
							//��ƼŬ ����
							UGameplayStatics::SpawnEmitterAtLocation(this, hitParticle, hits[i].Location);
						}
						if (hitSound != nullptr)
						{
							//���带 ����մϴ�
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