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

APlayerCharacter::APlayerCharacter() {
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
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	SpawnEquipment();
	/*
	if (Weapon != nullptr) {
		//스켈레탈메시 소켓 위치를 받아오는 방법.
		FVector weaponSocketLocation = GetMesh()->GetSocketLocation("WeaponSocket");
		spawndWeapon = GetWorld()->SpawnActor<AEquipmentActor>(Weapon.Get(), weaponSocketLocation, FRotator::ZeroRotator);
		spawndWeapon->SetOwner(this);

		//플레이어 캐릭터의 메시의 특정 위치에다 스폰한 무기를 부착시킴.
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
	//아무 방향기 입력이 없으면, 아무것도 안함

	if (moveForward == 0 && moveRight == 0)
	{
		return;
	}

	bRun = true;
	GetStatusComponent()->PauseRecoverStamina();
	GetStatusComponent()->RunRemoveStaminaTimer();
	GetCharacterMovement()->MaxWalkSpeed = 1200;
}

void APlayerCharacter::StopRun()
{
	bRun = false;
	GetStatusComponent()->PauseRemoveStaminaTimer();
	GetStatusComponent()->RunRecoverStaminaTimer();
	GetCharacterMovement()->MaxWalkSpeed = 600;

}

void APlayerCharacter::Roll()
{/*
	if (GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false)
	{
		if (RollMontage != nullptr && statusComponent->CheckStamina(30) == true)
		{
			statusComponent->SetSP(statusComponent->GetSP() - 30);
			statusComponent->PauseRecoverStamina();

			lockOnComponent->bBlockLookAt = true;
			float time = GetMesh()->GetAnimInstance()->Montage_Play(RollMontage);

			GetWorldTimerManager().SetTimer(RollStaminaTimerHandle,
				statusComponent, &UStatusComponent::RunRecoverStaminaTimer, time);

		}
	}
	*/
}

void APlayerCharacter::Guard()
{
	if (bReadyCombat)
	{
		bGuard = !bGuard;
		if (bGuard && statusComponent->CheckStamina(30) == false)
		{
			bGuard = false;
		}
	}
}

bool APlayerCharacter::GuardProcess(FVector hitLocation)
{
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
	/*
	//좌측
	if (-120 <= yaw && yaw <= 0)
	{
		GetMesh()->GetAnimInstance()->Montage_Play(leftGuardMontage);
	}
	//우측
	else if (yaw >= 0 && yaw <= 120)
	{
		GetMesh()->GetAnimInstance()->Montage_Play(rightGuardMontage);
	}
	//후방
	else
	{
		GetMesh()->GetAnimInstance()->Montage_Play(gotHitBackMontage);
		if (gotHitParticle != nullptr)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), gotHitParticle, hitLocation);
		}
		return false;
	}

	if (guardParticle != nullptr)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), guardParticle, hitLocation);
	}
	*/
	return true;
}

void APlayerCharacter::HitProcess(FVector hitLocation)
{
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
	if (yaw > -135 && yaw <= -45)
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitLeftMontage);
	}
	//전방
	else if (yaw > -45 && yaw <= 45)
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitCenterMontage);
	}
	//우측
	else if (yaw > 45 && yaw <= 135)
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitRightMontage);
	}
	//후방
	else
	{
		//GetMesh()->GetAnimInstance()->Montage_Play(gotHitBackMontage);
	}

	/*if (gotHitParticle != nullptr)
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
	//UE_LOG(LogTemp, Log, TEXT("111111111"));
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

	//hit.Location || hit.ImpactPoint <<-- 요 정보를 가지고 플레이어 앞방향을 기준으로 전 후 좌 우 를 어떻게 구별할 것인가?
	if (bGuard)
	{
		//Guard();
		if (statusComponent->CheckStamina(30))
		{
			statusComponent->SetSP(statusComponent->GetSP() - 30);
			if (GuardProcess(hit.ImpactPoint))
			{
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
		//-10(왼쪽) ~ 10(오른쪽)

		//만약 마우스를 오른쪽으로 움직였을 경우
		if (Val >= 5.f)
		{
			//락온컴포넌트의 NextLockOnTarget 호출
			//lockOnComponent->NextLockOnTarget();
			if (GetWorldTimerManager().TimerExists(nextLockOnTargetTimerHandle) == false)
			{
				GetWorldTimerManager().SetTimer(nextLockOnTargetTimerHandle, lockOnComponent, &ULockOnComponent::NextLockOnTarget, 0.2f);
			}
		}
		else if (Val <= -5.f)
		{
			//락온컴포넌트의 PreLockOnTarget 호출
			//lockOnComponent->PreLockOnTarget();
			if (GetWorldTimerManager().TimerExists(preLockOnTargetTimerHandle) == false)
			{
				GetWorldTimerManager().SetTimer(preLockOnTargetTimerHandle, lockOnComponent, &ULockOnComponent::PreLockOnTarget, 0.2f);
			}
		}
		//만약 마우스를 왼쪽으로 움직였을 경우
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

void APlayerCharacter::EquipWeapon()
{/*
	if(bReadyCombat == true)
	{
		if (UnEquipMontage != nullptr && GetMesh()->GetAnimInstance()->IsAnyMontagePlaying()==false) {
			GetMesh()->GetAnimInstance()->Montage_Play(UnEquipMontage);
			bReadyCombat = false;
		}
	}*/
}

void APlayerCharacter::Attack()
{/*
	if (bReadyCombat == false) {
		if (EquipMontage != nullptr) {
			if (GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() == false) {
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
	}*/
}

void APlayerCharacter::StopAttack()
{
	bAttack = false;
}

