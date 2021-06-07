// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Equipment/EquipmentActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Character/Monster.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Component/StatusComponent.h"
#include "Character/Player/Component/InventoryComponent.h"

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

void AEquipmentActor::HitProcess(const FVector& hitLocation)
{
	auto equipInfo = GetInventoryComponent()->GetEquippedItem();
	if (equipInfo.GetWeapon() == nullptr)
	{
		return;
	}
	//1. hitLocation�� �÷��̾� ������ ���� 
	FRotator rot = (hitLocation - GetActorLocation()).Rotation();
	//1�� ������ ���� �÷��̾��� �����̼��� �̿��ϸ�, �¿츦 �˼� ����
	float yaw = (rot - GetActorRotation()).Yaw;

	//�˾ƺ��� ����
	if (yaw > 180)
	{
		yaw -= 360;
	}
	else if (yaw < -180)
	{
		yaw += 360;
	}
	//�÷��̾� ���� ��������
	//������ : -180~0
	//������ : 0 ~ 180
	//����
	auto mesh = Cast<APlayerCharacter>(GetOwner())->GetMesh();
	if (yaw > -135 && yaw <= -45)
	{
		mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->gotHitLeftMontage);
	}
	//����
	else if (yaw > -45 && yaw <= 45)
	{
		mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->gotHitCenterMontage);
	}
	//����
	else if (yaw > 45 && yaw <= 135)
	{
		mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->gotHitRightMontage);
	}
	//�Ĺ�
	else
	{
		mesh->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->gotHitBackMontage);
	}

	if (equipInfo.GetWeapon()->gotHitParticle != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), equipInfo.GetWeapon()->gotHitParticle, hitLocation);
	}
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

UInventoryComponent* AEquipmentActor::GetInventoryComponent()
{
	auto player = Cast<APlayerCharacter>(GetOwner());
	if (player != nullptr)
	{
		return player->GetInventoryComponent();
	}
	return nullptr;
}

UStatusComponent* AEquipmentActor::GetStatusComponent()
{
	auto player = Cast<APlayerCharacter>(GetOwner());
	if (player != nullptr)
	{
		return player->GetStatusComponent();
	}
	return nullptr;
}

float AEquipmentActor::PlayMontage(UAnimMontage* montage)
{
	if (montage != nullptr)
	{
		auto player = Cast<APlayerCharacter>(GetOwner());
		if (player != nullptr)
		{
			return player->GetMesh()->GetAnimInstance()->Montage_Play(montage);
		}
	}
	return 0;
}

bool AEquipmentActor::IsPlayingAnyMontage()
{
	auto player = Cast<APlayerCharacter>(GetOwner());
	if (player != nullptr)
	{
		return player->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying();
	}
	return false;
}

void AEquipmentActor::OnBeginOverlapEvent(AActor* OverlappedActor, AActor* OtherActor)
{
	float damage = 30.f;
	if (OtherActor->IsA<AMonster>() == true)
	{
		if (hitActors.Contains(OtherActor) == false)
		{	
			//OverlappedActor;
			OtherActor->TakeDamage(damage, FDamageEvent(), nullptr, this);
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
							player->ShowDamage(damage, hits[i].Location);
						}
					}
				}
			}
		}
	}
}