// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"

#include "ItemTypes.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	Weapon,
	Shield,
	Armor,
	Consume
};

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Sword,
	TwoHanded
};
USTRUCT(BlueprintType)
struct FItemInformation : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName item_Code;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class AItemActor> itemClass;
	UPROPERTY(EditAnywhere)
		FName item_Name;

	UPROPERTY(EditAnywhere)
		class UTexture2D* item_Image;
	UPROPERTY(EditAnywhere)
		EItemType item_Type;
	UPROPERTY(EditAnywhere)
		FName item_Description;
	UPROPERTY(EditAnywhere)
		FName item_Description_Long;
};

USTRUCT(BlueprintType)
struct FEquipmentInformation : public FItemInformation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		float dam;
	UPROPERTY(EditAnywhere)
		float def;

	UPROPERTY(EditAnywhere)
		class USkeletalMeshComponent* mesh;
};

USTRUCT(BlueprintType)
struct FPotionInformation : public FItemInformation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		float hp;
	UPROPERTY(EditAnywhere)
		float sp;

	UPROPERTY(EditAnywhere)
		class UParticleSystem* useParticle;
	UPROPERTY(EditAnywhere)
		class USoundBase* useSound;

	UPROPERTY(EditAnywhere)
		class UAnimMontage* useMontage;
};

USTRUCT(BlueprintType)
struct FWeaponInformation : public FEquipmentInformation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		EWeaponType weaponType;
	UPROPERTY(EditAnywhere)
		class USkeletalMesh* newMesh;

	UPROPERTY(EditAnywhere)
		class UAnimMontage* EquipMontage;
	UPROPERTY(EditAnywhere)
		class UAnimMontage* UnEquipMontage;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AEquipmentActor> Weapon;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class AEquipmentActor> Shield;
	
	UPROPERTY(EditAnywhere)
		class UAnimMontage* RollMontage;
	UPROPERTY(EditAnyWhere)
		class UAnimMontage* gotHitCenterMontage;
	UPROPERTY(EditAnyWhere)
		class UAnimMontage* gotHitRightMontage;
	UPROPERTY(EditAnyWhere)
		class UAnimMontage* gotHitLeftMontage;
	UPROPERTY(EditAnyWhere)
		class UAnimMontage* gotHitBackMontage;
	UPROPERTY(EditAnywhere)
		class UAnimMontage* AttackMontage;
	UPROPERTY(EditAnywhere)
		class UAnimMontage* guardMontage;

	UPROPERTY(EditAnyWhere)
		class UParticleSystem* gotHitParticle;
	UPROPERTY(EditAnyWhere)
		class UParticleSystem* hitParticle;
	UPROPERTY(EditAnyWhere)
		class UAnimBlueprint* animBP;

	UPROPERTY(EditAnyWhere)
		float attackSP;
	UPROPERTY(EditAnyWhere)
		float rollSP;
};