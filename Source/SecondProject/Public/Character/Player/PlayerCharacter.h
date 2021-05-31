// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"

#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

private:
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;
	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

public:
	APlayerCharacter();	//Push Test***
	//요 액터가 생성(혹은 게임시작)되면 한번 호출되는 함수입니다.
	virtual void BeginPlay() override;

	void Run();
	void StopRun();
	void Roll();
	void Guard();
	bool GuardProcess(FVector hitLocation);
	void HitProcess(FVector hitLocation);

	void LockOn();

	void ShowDamage(float damage, FVector hitLocation);
	void InventoryOpen();
	void ItemPickUp();
	void SpawnEquipment();

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	virtual void PostInitializeComponents() override;

	UFUNCTION()
		void OnBeginOverlapEvent(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
		void OnEndOverlapEvent(AActor* OverlappedActor, AActor* OtherActor);

	void SetGuard(bool value) { bGuard = value; }
	void SetSpawndWeapon(class AEquipmentActor* weapon) { spawndWeapon = weapon; }
	bool GetbAttack() { return bAttack; }

	class AEquipmentActor* GetWeapon() { return spawndWeapon; }
	class AEquipmentActor* GetShield() { return spawndShield; }
	class AEquipmentActor* GetSpawndWeapon() { return spawndWeapon; }
	class AEquipmentActor* GetSpawndShield() { return spawndShield; }
	class ULockOnComponent* GetLockOnComponent() { return lockOnComponent; }
	class UInventoryComponent* GetInventoryComponent() { return inventoryComponent; }

	class USkeletalMeshComponent* GetHelmet() { return Helmet; }
	class USkeletalMeshComponent* GetGloves() { return Gloves; }
	class USkeletalMeshComponent* GetChest() { return Chest; }
	class USkeletalMeshComponent* GetLegs() { return Legs; }
	class USkeletalMeshComponent* GetBoots() { return Boots; }

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	/** Called for forwards/backward input */
	void MoveForward(float Value);
	/** Called for side to side input */
	void MoveRight(float Value);
	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);
	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);
	virtual void AddControllerYawInput(float Val) override;
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface
	virtual void OnConstruction(const FTransform& Transform) override;

	void EquipWeapon();
	void Attack();
	void StopAttack();

	void QuickChangeRight();
	void QuickChangeLeft();
	void UseQuickItem();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;
	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;
	FRotator originalRotationRate = FRotator(0.0f, 540.0f, 0.0f);

	UPROPERTY(BlueprintReadOnly)
		bool bRun;
	UPROPERTY(BlueprintReadOnly)
		bool bGuard;
	UPROPERTY(BlueprintReadOnly)
		bool bLockOn;
	UPROPERTY(BlueprintReadOnly)
		bool bReadyCombat = false;
	//공격키를 누르면 참이 됨
	bool bAttack = false;

	FTimerHandle RollStaminaTimerHandle;
	FTimerHandle nextLockOnTargetTimerHandle;
	FTimerHandle preLockOnTargetTimerHandle;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AEquipmentActor> equipmentClass;

	UPROPERTY()
		class AItemActor* pickUpItem = nullptr;

protected:
	UPROPERTY(VisibleAnywhere)
		class ULockOnComponent* lockOnComponent;
	UPROPERTY(BlueprintReadOnly)
		float moveForward;
	UPROPERTY(BlueprintReadOnly)
		float moveRight;

	UPROPERTY()
		AEquipmentActor* spawndWeapon;
	UPROPERTY()
		AEquipmentActor* spawndShield;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UWidgetComponent> damageWidgetComponentClass;

	UPROPERTY(VisibleAnywhere)
		class UInventoryComponent* inventoryComponent;

	//달릴때 소모하는 sp 타이머
	UPROPERTY()
		FTimerHandle RunStaminaTimerHandle;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly)
		class USkeletalMeshComponent* Helmet;
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly)
		class USkeletalMeshComponent* Gloves;
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly)
		class USkeletalMeshComponent* Chest;
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly)
		class USkeletalMeshComponent* Legs;
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly)
		class USkeletalMeshComponent* Boots;
};
