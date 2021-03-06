// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Item/ItemTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemTypes() {}
// Cross Module References
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EEquipmentType();
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EItemType();
	SECONDPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInformation();
	SECONDPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentInformation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AEquipmentActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	SECONDPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPotionInformation();
	SECONDPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FItemInformation();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SecondProject_EWeaponType, Z_Construct_UPackage__Script_SecondProject(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> SECONDPROJECT_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/SecondProject"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SecondProject_EWeaponType_Hash() { return 771406222U; }
	UEnum* Z_Construct_UEnum_SecondProject_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_SecondProject_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::Sword", (int64)EWeaponType::Sword },
				{ "EWeaponType::TwoHanded", (int64)EWeaponType::TwoHanded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
				{ "Sword.Name", "EWeaponType::Sword" },
				{ "TwoHanded.Name", "EWeaponType::TwoHanded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SecondProject,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEquipmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SecondProject_EEquipmentType, Z_Construct_UPackage__Script_SecondProject(), TEXT("EEquipmentType"));
		}
		return Singleton;
	}
	template<> SECONDPROJECT_API UEnum* StaticEnum<EEquipmentType>()
	{
		return EEquipmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipmentType(EEquipmentType_StaticEnum, TEXT("/Script/SecondProject"), TEXT("EEquipmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SecondProject_EEquipmentType_Hash() { return 3520246886U; }
	UEnum* Z_Construct_UEnum_SecondProject_EEquipmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipmentType"), 0, Get_Z_Construct_UEnum_SecondProject_EEquipmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipmentType::Weapon", (int64)EEquipmentType::Weapon },
				{ "EEquipmentType::Shield", (int64)EEquipmentType::Shield },
				{ "EEquipmentType::Helmet", (int64)EEquipmentType::Helmet },
				{ "EEquipmentType::Gloves", (int64)EEquipmentType::Gloves },
				{ "EEquipmentType::Chest", (int64)EEquipmentType::Chest },
				{ "EEquipmentType::Legs", (int64)EEquipmentType::Legs },
				{ "EEquipmentType::Boots", (int64)EEquipmentType::Boots },
				{ "EEquipmentType::None", (int64)EEquipmentType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boots.Name", "EEquipmentType::Boots" },
				{ "Chest.Name", "EEquipmentType::Chest" },
				{ "Gloves.Name", "EEquipmentType::Gloves" },
				{ "Helmet.Name", "EEquipmentType::Helmet" },
				{ "Legs.Name", "EEquipmentType::Legs" },
				{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
				{ "None.Name", "EEquipmentType::None" },
				{ "Shield.Name", "EEquipmentType::Shield" },
				{ "Weapon.Name", "EEquipmentType::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SecondProject,
				nullptr,
				"EEquipmentType",
				"EEquipmentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SecondProject_EItemType, Z_Construct_UPackage__Script_SecondProject(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> SECONDPROJECT_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/SecondProject"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SecondProject_EItemType_Hash() { return 2765314718U; }
	UEnum* Z_Construct_UEnum_SecondProject_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_SecondProject_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemType::Equipment", (int64)EItemType::Equipment },
				{ "EItemType::Consume", (int64)EItemType::Consume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Consume.Name", "EItemType::Consume" },
				{ "Equipment.Name", "EItemType::Equipment" },
				{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SecondProject,
				nullptr,
				"EItemType",
				"EItemType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FWeaponInformation>() == std::is_polymorphic<FEquipmentInformation>(), "USTRUCT FWeaponInformation cannot be polymorphic unless super FEquipmentInformation is polymorphic");

class UScriptStruct* FWeaponInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SECONDPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FWeaponInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponInformation, Z_Construct_UPackage__Script_SecondProject(), TEXT("WeaponInformation"), sizeof(FWeaponInformation), Get_Z_Construct_UScriptStruct_FWeaponInformation_Hash());
	}
	return Singleton;
}
template<> SECONDPROJECT_API UScriptStruct* StaticStruct<FWeaponInformation>()
{
	return FWeaponInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponInformation(FWeaponInformation::StaticStruct, TEXT("/Script/SecondProject"), TEXT("WeaponInformation"), false, nullptr, nullptr);
static struct FScriptStruct_SecondProject_StaticRegisterNativesFWeaponInformation
{
	FScriptStruct_SecondProject_StaticRegisterNativesFWeaponInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponInformation")),new UScriptStruct::TCppStructOps<FWeaponInformation>);
	}
} ScriptStruct_SecondProject_StaticRegisterNativesFWeaponInformation;
	struct Z_Construct_UScriptStruct_FWeaponInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnableEquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_spawnableEquipmentClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_weaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_weaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnEquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnEquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gotHitCenterMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gotHitCenterMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gotHitRightMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gotHitRightMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gotHitLeftMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gotHitLeftMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gotHitBackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gotHitBackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightGuardMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightGuardMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftGuardMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftGuardMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frontGuardMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_frontGuardMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guardMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_guardMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gotHitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gotHitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guardParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_guardParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackSP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackSP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rollSP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rollSP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_spawnableEquipmentClass_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_spawnableEquipmentClass = { "spawnableEquipmentClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, spawnableEquipmentClass), Z_Construct_UClass_AEquipmentActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_spawnableEquipmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_spawnableEquipmentClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, weaponType), Z_Construct_UEnum_SecondProject_EWeaponType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_weaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_weaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_newMesh_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_newMesh = { "newMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, newMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_newMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_newMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_EquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_EquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_UnEquipMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_UnEquipMontage = { "UnEquipMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, UnEquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_UnEquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_UnEquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, Weapon), Z_Construct_UClass_AEquipmentActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Shield_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Shield = { "Shield", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, Shield), Z_Construct_UClass_AEquipmentActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_RollMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_RollMontage = { "RollMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, RollMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_RollMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_RollMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitCenterMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitCenterMontage = { "gotHitCenterMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, gotHitCenterMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitCenterMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitCenterMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitRightMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitRightMontage = { "gotHitRightMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, gotHitRightMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitRightMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitRightMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitLeftMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitLeftMontage = { "gotHitLeftMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, gotHitLeftMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitLeftMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitLeftMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitBackMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitBackMontage = { "gotHitBackMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, gotHitBackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitBackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitBackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rightGuardMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rightGuardMontage = { "rightGuardMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, rightGuardMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rightGuardMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rightGuardMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_leftGuardMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_leftGuardMontage = { "leftGuardMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, leftGuardMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_leftGuardMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_leftGuardMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_frontGuardMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_frontGuardMontage = { "frontGuardMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, frontGuardMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_frontGuardMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_frontGuardMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardMontage_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardMontage = { "guardMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, guardMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitParticle_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitParticle = { "gotHitParticle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, gotHitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_hitParticle_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_hitParticle = { "hitParticle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, hitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_hitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_hitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardParticle_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardParticle = { "guardParticle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, guardParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_animBP_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_animBP = { "animBP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, animBP), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_animBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_animBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_attackSP_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_attackSP = { "attackSP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, attackSP), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_attackSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_attackSP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rollSP_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rollSP = { "rollSP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponInformation, rollSP), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rollSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rollSP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_spawnableEquipmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_weaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_newMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_EquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_UnEquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_RollMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitCenterMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitRightMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitLeftMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitBackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rightGuardMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_leftGuardMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_frontGuardMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_AttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_gotHitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_hitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_guardParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_animBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_attackSP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponInformation_Statics::NewProp_rollSP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
		Z_Construct_UScriptStruct_FEquipmentInformation,
		&NewStructOps,
		"WeaponInformation",
		sizeof(FWeaponInformation),
		alignof(FWeaponInformation),
		Z_Construct_UScriptStruct_FWeaponInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponInformation"), sizeof(FWeaponInformation), Get_Z_Construct_UScriptStruct_FWeaponInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponInformation_Hash() { return 2869920149U; }

static_assert(std::is_polymorphic<FPotionInformation>() == std::is_polymorphic<FItemInformation>(), "USTRUCT FPotionInformation cannot be polymorphic unless super FItemInformation is polymorphic");

class UScriptStruct* FPotionInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SECONDPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FPotionInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPotionInformation, Z_Construct_UPackage__Script_SecondProject(), TEXT("PotionInformation"), sizeof(FPotionInformation), Get_Z_Construct_UScriptStruct_FPotionInformation_Hash());
	}
	return Singleton;
}
template<> SECONDPROJECT_API UScriptStruct* StaticStruct<FPotionInformation>()
{
	return FPotionInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPotionInformation(FPotionInformation::StaticStruct, TEXT("/Script/SecondProject"), TEXT("PotionInformation"), false, nullptr, nullptr);
static struct FScriptStruct_SecondProject_StaticRegisterNativesFPotionInformation
{
	FScriptStruct_SecondProject_StaticRegisterNativesFPotionInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PotionInformation")),new UScriptStruct::TCppStructOps<FPotionInformation>);
	}
} ScriptStruct_SecondProject_StaticRegisterNativesFPotionInformation;
	struct Z_Construct_UScriptStruct_FPotionInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_useParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_useSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_useMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotionInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPotionInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPotionInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "PotionInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPotionInformation, hp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_sp_MetaData[] = {
		{ "Category", "PotionInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_sp = { "sp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPotionInformation, sp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_sp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_sp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useParticle_MetaData[] = {
		{ "Category", "PotionInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useParticle = { "useParticle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPotionInformation, useParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useSound_MetaData[] = {
		{ "Category", "PotionInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useSound = { "useSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPotionInformation, useSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useMontage_MetaData[] = {
		{ "Category", "PotionInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useMontage = { "useMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPotionInformation, useMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPotionInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_sp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPotionInformation_Statics::NewProp_useMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPotionInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
		Z_Construct_UScriptStruct_FItemInformation,
		&NewStructOps,
		"PotionInformation",
		sizeof(FPotionInformation),
		alignof(FPotionInformation),
		Z_Construct_UScriptStruct_FPotionInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotionInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPotionInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotionInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPotionInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPotionInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PotionInformation"), sizeof(FPotionInformation), Get_Z_Construct_UScriptStruct_FPotionInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPotionInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPotionInformation_Hash() { return 63033351U; }

static_assert(std::is_polymorphic<FEquipmentInformation>() == std::is_polymorphic<FItemInformation>(), "USTRUCT FEquipmentInformation cannot be polymorphic unless super FItemInformation is polymorphic");

class UScriptStruct* FEquipmentInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SECONDPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FEquipmentInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentInformation, Z_Construct_UPackage__Script_SecondProject(), TEXT("EquipmentInformation"), sizeof(FEquipmentInformation), Get_Z_Construct_UScriptStruct_FEquipmentInformation_Hash());
	}
	return Singleton;
}
template<> SECONDPROJECT_API UScriptStruct* StaticStruct<FEquipmentInformation>()
{
	return FEquipmentInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEquipmentInformation(FEquipmentInformation::StaticStruct, TEXT("/Script/SecondProject"), TEXT("EquipmentInformation"), false, nullptr, nullptr);
static struct FScriptStruct_SecondProject_StaticRegisterNativesFEquipmentInformation
{
	FScriptStruct_SecondProject_StaticRegisterNativesFEquipmentInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EquipmentInformation")),new UScriptStruct::TCppStructOps<FEquipmentInformation>);
	}
} ScriptStruct_SecondProject_StaticRegisterNativesFEquipmentInformation;
	struct Z_Construct_UScriptStruct_FEquipmentInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_def_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_def;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_equipmentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipmentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_equipmentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_dam_MetaData[] = {
		{ "Category", "EquipmentInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_dam = { "dam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentInformation, dam), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_dam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_dam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_def_MetaData[] = {
		{ "Category", "EquipmentInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_def = { "def", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentInformation, def), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_def_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_def_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "EquipmentInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentInformation, mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_equipmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_equipmentType_MetaData[] = {
		{ "Category", "EquipmentInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_equipmentType = { "equipmentType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentInformation, equipmentType), Z_Construct_UEnum_SecondProject_EEquipmentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_equipmentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_equipmentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_dam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_def,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_equipmentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentInformation_Statics::NewProp_equipmentType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
		Z_Construct_UScriptStruct_FItemInformation,
		&NewStructOps,
		"EquipmentInformation",
		sizeof(FEquipmentInformation),
		alignof(FEquipmentInformation),
		Z_Construct_UScriptStruct_FEquipmentInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEquipmentInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EquipmentInformation"), sizeof(FEquipmentInformation), Get_Z_Construct_UScriptStruct_FEquipmentInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEquipmentInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEquipmentInformation_Hash() { return 3318644706U; }

static_assert(std::is_polymorphic<FItemInformation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemInformation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FItemInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SECONDPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FItemInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInformation, Z_Construct_UPackage__Script_SecondProject(), TEXT("ItemInformation"), sizeof(FItemInformation), Get_Z_Construct_UScriptStruct_FItemInformation_Hash());
	}
	return Singleton;
}
template<> SECONDPROJECT_API UScriptStruct* StaticStruct<FItemInformation>()
{
	return FItemInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemInformation(FItemInformation::StaticStruct, TEXT("/Script/SecondProject"), TEXT("ItemInformation"), false, nullptr, nullptr);
static struct FScriptStruct_SecondProject_StaticRegisterNativesFItemInformation
{
	FScriptStruct_SecondProject_StaticRegisterNativesFItemInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemInformation")),new UScriptStruct::TCppStructOps<FItemInformation>);
	}
} ScriptStruct_SecondProject_StaticRegisterNativesFItemInformation;
	struct Z_Construct_UScriptStruct_FItemInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_item_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_item_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item_Image;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_item_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_item_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_equip_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equip_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_equip_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_item_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_Description_Long_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_item_Description_Long;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Code_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Code = { "item_Code", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, item_Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_itemClass_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, itemClass), Z_Construct_UClass_AItemActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_itemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_itemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Name_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Name = { "item_Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, item_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Image_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Image = { "item_Image", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, item_Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Image_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Type_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Type = { "item_Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, item_Type), Z_Construct_UEnum_SecondProject_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_equip_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_equip_Type_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_equip_Type = { "equip_Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, equip_Type), Z_Construct_UEnum_SecondProject_EEquipmentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_equip_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_equip_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description = { "item_Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, item_Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_Long_MetaData[] = {
		{ "Category", "ItemInformation" },
		{ "ModuleRelativePath", "Public/Item/ItemTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_Long = { "item_Description_Long", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemInformation, item_Description_Long), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_Long_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_Long_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_equip_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_equip_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInformation_Statics::NewProp_item_Description_Long,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemInformation",
		sizeof(FItemInformation),
		alignof(FItemInformation),
		Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemInformation"), sizeof(FItemInformation), Get_Z_Construct_UScriptStruct_FItemInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemInformation_Hash() { return 274859953U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
