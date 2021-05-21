// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Controller/CustomController.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Component/StatusComponent.h"
#include "Character/Component/LockOnComponent.h"
#include "Character/Equipment/EquipmentActor.h"
#include "Widget/ShowDamageWidget.h"
#include "Item/ItemActor.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

APlayerCharacter::APlayerCharacter() 
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = originalRotationRate; // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	lockOnComponent = CreateDefaultSubobject<ULockOnComponent>(TEXT("lockOnComp"));
	inventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("inventoryComp"));
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
	Helmet->SetupAttachment(GetMesh());
	Gloves = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gloves"));
	Gloves->SetupAttachment(GetMesh());
	Chest = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Chest"));
	Chest->SetupAttachment(GetMesh());
	Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
	Legs->SetupAttachment(GetMesh());
	Boots = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Boots"));
	Boots->SetupAttachment(GetMesh());
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetStatusComponent()->RecoverStaminaPerTime(1.f);
	//SpawnEquipment();
	/*
	if (Weapon != nullptr) {
		//���̷�Ż�޽� ���� ��ġ�� �޾ƿ��� ���.
		FVector weaponSocketLocation = GetMesh()->GetSocketLocation("WeaponSocket");
		spawndWeapon = GetWorld()->SpawnActor<AEquipmentActor>(Weapon.Get(), weaponSocketLocation, FRotator::ZeroRotator);
		spawndWeapon->SetOwner(this);

		//�÷��̾� ĳ������ �޽��� Ư�� ��ġ���� ������ ���⸦ ������Ŵ.
		spawndWeapon->AttachToComponent(
			GetMesh(),
			FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false),
			"WeaponSocket"
		);
	}

	if (Shield != nullptr) {
		FVector shieldSocketLocation = GetMesh()->GetSocketLocation("ShieldSocket");
		spawndShield = GetWorld()->SpawnActor<AEquipmentActor>(Shield.Get(), shieldSocketLocation, FRotator::ZeroRotator);

		spawndShield->AttachToComponent(
			GetMesh(),
			FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false),
			"ShieldSocket"
		);
	}
	*/
}

void APlayerCharacter::Run()
{
	//�ƹ� ����� �Է��� ������, �ƹ��͵� ����

	if (moveForward == 0 && moveRight == 0)
	{
		return;
	}

	bRun = true;
	GetStatusComponent()->PauseRecoverStaminaPerTime();
	//GetStatusComponent()->PauseRecoverStamina();
	//GetStatusComponent()->RunRemoveStaminaTimer();
	GetCharacterMovement()->MaxWalkSpeed = 1200;

	if (GetWorldTimerManager().IsTimerActive(RunStaminaTimerHandle) == false)
	{
		FTimerDelegate runTimerDel = FTimerDelegate::CreateUObject(GetStatusComponent(), &UStatusComponent::RemoveStamina, 7.f);
		GetWorldTimerManager().SetTimer(RunStaminaTimerHandle, runTimerDel, 1.f, true);
	}
}

void APlayerCharacter::StopRun()
{
	bRun = false;
	GetStatusComponent()->ResumeRecoverStaminaPerTime();
	//GetStatusComponent()->PauseRemoveStaminaTimer();
	//GetStatusComponent()->RunRecoverStaminaTimer();
	GetCharacterMovement()->MaxWalkSpeed = 600;

	if (GetWorldTimerManager().IsTimerActive(RunStaminaTimerHandle) == true)
	{
		GetWorldTimerManager().ClearTimer(RunStaminaTimerHandle);
	}
}

void APlayerCharacter::Roll()
{
	auto equipInfo = inventoryComponent->GetEquippedItem();
	if (equipInfo.GetWeapon() != nullptr)
	{
		if (GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false)
		{
			if (spawndWeapon != nullptr)
			{
				spawndWeapon->Roll();
			}
			/*
			if (equipInfo.GetWeapon()->RollMontage != nullptr && statusComponent->CheckStamina(equipInfo.GetWeapon()->rollSP) == true)
			{
				statusComponent->SetSP(statusComponent->GetSP() - equipInfo.GetWeapon()->rollSP);
				statusComponent->PauseRecoverStamina();

				lockOnComponent->bBlockLookAt = true;
				float time = GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->RollMontage);

				GetWorldTimerManager().SetTimer(RollStaminaTimerHandle,
					statusComponent, &UStatusComponent::RunRecoverStaminaTimer, time);

			}
			*/
		}
	}
}

void APlayerCharacter::Guard()
{
	auto equipInfo = inventoryComponent->GetEquippedItem();
	if (equipInfo.GetWeapon() != nullptr)
	{
		if (bReadyCombat)
		{
			if (spawndWeapon != nullptr)
			{
				spawndWeapon->Guard();
			}
			/*
			bGuard = !bGuard;
			if (equipInfo.GetShield() != nullptr)
			{
				if (bGuard && statusComponent->CheckStamina(30) == false)
				{
					bGuard = false;
				}
			}
			else
			{
				if (equipInfo.GetWeapon()->guardMontage != nullptr)
				{
					if (!GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
					{
						float time = GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->guardMontage);

						FDelegate guardTimerDel = FTimerDelegate::CreateUObject(this, &APlayerCharacter::SetGuard, false);
						FTimerHandle guardTimerHandle;
						GetWorldTimerManager().SetTimer(guardTimerHandle, guardTimerDel, time, false);
					}
				}
			}
			*/
		}
	}
}

bool APlayerCharacter::GuardProcess(FVector hitLocation)
{
	auto equipInfo = inventoryComponent->GetEquippedItem();
	if (equipInfo.GetWeapon() == nullptr)
	{
		return false;
	}
	if (spawndWeapon != nullptr)
	{
		return spawndWeapon->GuardProcess(hitLocation);
	}
	return false;
	/*
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
	if (-120 <= yaw && yaw <= 0)
	{
		if (equipInfo.GetWeapon()->leftGuardMontage != nullptr)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->leftGuardMontage);
		}
		else
		{
			GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->frontGuardMontage);
		}
	}
	//����
	else if (yaw >= 0 && yaw <= 120)
	{
		if (equipInfo.GetWeapon()->rightGuardMontage)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->rightGuardMontage);
		}
		else
		{
			GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->frontGuardMontage);
		}
	}
	//�Ĺ�
	else
	{
		GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->gotHitBackMontage);
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
	*/
}

void APlayerCharacter::HitProcess(FVector hitLocation)
{
	auto equipInfo = inventoryComponent->GetEquippedItem();
	if (equipInfo.GetWeapon() == nullptr)
	{
		return;
	}
	if (spawndWeapon != nullptr)
	{
		spawndWeapon->HitProcess(hitLocation);
	}
	/*
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
	if (yaw > -135 && yaw <= -45)
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitLeftMontage);
	}
	//����
	else if (yaw > -45 && yaw <= 45)
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitCenterMontage);
	}
	//����
	else if (yaw > 45 && yaw <= 135)
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitRightMontage);
	}
	//�Ĺ�
	else
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitBackMontage);
	}

	if (gotHitParticle != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), gotHitParticle, hitLocation);
	}*/
}

void APlayerCharacter::LockOn()
{
	if (bReadyCombat)
	{
		bLockOn = !bLockOn;

		if (bLockOn)
		{
			lockOnComponent->SetLockOn();
		}
		else
		{
			lockOnComponent->StopLockOn();
		}
	}
}

void APlayerCharacter::ShowDamage(float damage, FVector hitLocation)
{
	auto comp = NewObject<UWidgetComponent>(this, damageWidgetComponentClass.Get());
	if (comp != nullptr)
	{
		comp->RegisterComponent();

		auto damageWidget = Cast<UShowDamageWidget>(comp->GetUserWidgetObject());
		if (damageWidget != nullptr)
		{
			damageWidget->SetDamageText(damage);
		}
		FVector randLocation = FVector(FMath::RandRange(0, 50), FMath::RandRange(0, 50), FMath::RandRange(0, 50));
		comp->SetWorldLocation(hitLocation + randLocation);
	}
}

void APlayerCharacter::InventoryOpen()
{
	auto open = Cast<ACustomController>(GetController());

	if (open != nullptr)
	{
		open->ShowInventory();
	}
}

void APlayerCharacter::ItemPickUp()
{
	if (pickUpItem != nullptr)
	{
		inventoryComponent->AddItem(pickUpItem);
		pickUpItem->Destroy();
		pickUpItem = nullptr;
	}
}

void APlayerCharacter::SpawnEquipment()
{
	if (equipmentClass != nullptr)
	{
		spawndWeapon = GetWorld()->SpawnActor<AEquipmentActor>(equipmentClass.Get());
		if (spawndWeapon != nullptr)
		{
			spawndWeapon->SetOwner(this);
		}

		spawndShield = GetWorld()->SpawnActor<AEquipmentActor>(equipmentClass.Get());
		if (spawndShield != nullptr)
		{
			spawndShield->SetOwner(this);
		}
	}
}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	FHitResult hit;
	FVector vec;
	DamageEvent.GetBestHitInfo(this, DamageCauser, hit, vec);

	//hit.Location || hit.ImpactPoint <<-- �� ������ ������ �÷��̾� �չ����� �������� �� �� �� �� �� ��� ������ ���ΰ�?
	if (bGuard)
	{
		if (statusComponent->CheckStamina(30))
		{
				if (GuardProcess(hit.ImpactPoint))
				{
					statusComponent->SetSP(statusComponent->GetSP() - 30);
					DamageAmount = 0;
				}
		}
	}
	else
	{
		HitProcess(hit.ImpactPoint);
	}

	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	return 0.0f;
}

void APlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	OnActorBeginOverlap.AddUniqueDynamic(this, &APlayerCharacter::OnBeginOverlapEvent);
	OnActorEndOverlap.AddUniqueDynamic(this, &APlayerCharacter::OnEndOverlapEvent);
}

void APlayerCharacter::OnBeginOverlapEvent(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->IsA<AItemActor>())
	{
		pickUpItem = Cast <AItemActor>(OtherActor);
		pickUpItem->GetWidgetComponent()->SetVisibility(true);
	}
}

void APlayerCharacter::OnEndOverlapEvent(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == pickUpItem)
	{
		pickUpItem->GetWidgetComponent()->SetVisibility(false);
		pickUpItem = nullptr;
	}
}

// Value : -1 ~ 1
void APlayerCharacter::MoveForward(float Value)
{
	if (bRun)
	{
		moveForward = Value * 2;
	}
	else
	{
		moveForward = Value;
	}
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APlayerCharacter::MoveRight(float Value)
{
	if (bRun)
	{
		moveRight = Value * 2;
	}
	else
	{
		moveRight = Value;
	}
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void APlayerCharacter::TurnAtRate(float Rate)
{	
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::AddControllerYawInput(float Val)
{
	if (bLockOn == false)
	{
		Super::AddControllerYawInput(Val);
	}
	else
	{
		//-10(����) ~ 10(������)

		//���� ���콺�� ���������� �������� ���
		if (Val >= 5.f)
		{
			//����������Ʈ�� NextLockOnTarget ȣ��
			//lockOnComponent->NextLockOnTarget();
			if (GetWorldTimerManager().TimerExists(nextLockOnTargetTimerHandle) == false)
			{
				GetWorldTimerManager().SetTimer(nextLockOnTargetTimerHandle, lockOnComponent, &ULockOnComponent::NextLockOnTarget, 0.2f);
			}
		}
		else if (Val <= -5.f)
		{
			//����������Ʈ�� PreLockOnTarget ȣ��
			//lockOnComponent->PreLockOnTarget();
			if (GetWorldTimerManager().TimerExists(preLockOnTargetTimerHandle) == false)
			{
				GetWorldTimerManager().SetTimer(preLockOnTargetTimerHandle, lockOnComponent, &ULockOnComponent::PreLockOnTarget, 0.2f);
			}
		}
		//���� ���콺�� �������� �������� ���
	}
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("EquipWeapon", IE_Pressed, this, &APlayerCharacter::EquipWeapon);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APlayerCharacter::Attack);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &APlayerCharacter::StopAttack);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &APlayerCharacter::Run);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &APlayerCharacter::StopRun);

	PlayerInputComponent->BindAction("Roll", IE_Pressed, this, &APlayerCharacter::Roll);
	PlayerInputComponent->BindAction("Guard", IE_Pressed, this, &APlayerCharacter::Guard);
	PlayerInputComponent->BindAction("Guard", IE_Released, this, &APlayerCharacter::Guard);

	PlayerInputComponent->BindAction("LockOn", IE_Pressed, this, &APlayerCharacter::LockOn);
	PlayerInputComponent->BindAction("Inventory", IE_Pressed, this, &APlayerCharacter::InventoryOpen);
	PlayerInputComponent->BindAction("PickUp", IE_Pressed, this, &APlayerCharacter::ItemPickUp);

}

void APlayerCharacter::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	Helmet->SetMasterPoseComponent(GetMesh());
	Gloves->SetMasterPoseComponent(GetMesh());
	Chest->SetMasterPoseComponent(GetMesh());
	Legs->SetMasterPoseComponent(GetMesh());
	Boots->SetMasterPoseComponent(GetMesh());
}

void APlayerCharacter::EquipWeapon()
{
	auto equipInfo = inventoryComponent->GetEquippedItem();
	if (equipInfo.GetWeapon() != nullptr)
	{
		if (bReadyCombat == true)
		{
			if (equipInfo.GetWeapon()->UnEquipMontage != nullptr && GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false)
			{
				GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->UnEquipMontage);
				bReadyCombat = false;
			}
		}
	}
	/*
	if(bReadyCombat == true)
	{
		if (UnEquipMontage != nullptr && GetMesh()->GetAnimInstance()->IsAnyMontagePlaying()==false)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(UnEquipMontage);
			bReadyCombat = false;
		}
	}
	*/
}

void APlayerCharacter::Attack()
{
	if (spawndWeapon != nullptr)
	{
		spawndWeapon->Attack();
	}

	/*
	auto equipInfo = inventoryComponent->GetEquippedItem();
	if (equipInfo.GetWeapon() != nullptr)
	{
		if (bReadyCombat == false)
		{
			if (equipInfo.GetWeapon()->EquipMontage != nullptr)
			{
				if (GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false) 
				{
					GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->EquipMontage);
					bReadyCombat = true;
				}
			}
		}
		else
		{
			bAttack = true;

			if (equipInfo.GetWeapon()->AttackMontage != nullptr &&
				GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false)
			{
				if (statusComponent->CheckStamina(equipInfo.GetWeapon()->attackSP))
				{
					statusComponent->SetSP(statusComponent->GetSP() - equipInfo.GetWeapon()->attackSP);
					statusComponent->PauseRecoverStamina();
					GetMesh()->GetAnimInstance()->Montage_Play(equipInfo.GetWeapon()->AttackMontage);
				}
			}
		}
	}
	
	if (bReadyCombat == false) {
		if (EquipMontage != nullptr)
		{
			if (GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false)
			{
				GetMesh()->GetAnimInstance()->Montage_Play(EquipMontage);
				bReadyCombat = true;
			}
		}
	}
	else
	{
		bAttack = true;

		if (	AttackMontage != nullptr &&
			GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false) {

			if (statusComponent->CheckStamina(20))
			{
				statusComponent->SetSP(statusComponent->GetSP() - 20);
				statusComponent->PauseRecoverStamina();
				GetMesh()->GetAnimInstance()->Montage_Play(AttackMontage);
			}
		}
	}
	*/
}

void APlayerCharacter::StopAttack()
{
	bAttack = false;
	GetStatusComponent()->ResumeRecoverStaminaPerTime();
}
