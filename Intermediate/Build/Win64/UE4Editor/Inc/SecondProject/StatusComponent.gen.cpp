// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Component/StatusComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusComponent() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UStatusComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	void UStatusComponent::StaticRegisterNativesUStatusComponent()
	{
	}
	UClass* Z_Construct_UClass_UStatusComponent_NoRegister()
	{
		return UStatusComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatusComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_def_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_def;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PauseRecoverStaminaTimerHandles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseRecoverStaminaTimerHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PauseRecoverStaminaTimerHandles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/Component/StatusComponent.h" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, HP), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, MaxHP), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_SP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_SP = { "SP", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, SP), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_SP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_SP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxSP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxSP = { "MaxSP", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, MaxSP), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxSP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, AttackSpeed), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_dam_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_dam = { "dam", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, dam), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_dam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_dam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_def_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_def = { "def", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, def), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_def_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_def_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_PauseRecoverStaminaTimerHandles_Inner = { "PauseRecoverStaminaTimerHandles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_PauseRecoverStaminaTimerHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Component/StatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_PauseRecoverStaminaTimerHandles = { "PauseRecoverStaminaTimerHandles", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, PauseRecoverStaminaTimerHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_PauseRecoverStaminaTimerHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_PauseRecoverStaminaTimerHandles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_SP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_MaxSP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_AttackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_dam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_def,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_PauseRecoverStaminaTimerHandles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_PauseRecoverStaminaTimerHandles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatusComponent_Statics::ClassParams = {
		&UStatusComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatusComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatusComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatusComponent, 3988279722);
	template<> SECONDPROJECT_API UClass* StaticClass<UStatusComponent>()
	{
		return UStatusComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatusComponent(Z_Construct_UClass_UStatusComponent, &UStatusComponent::StaticClass, TEXT("/Script/SecondProject"), TEXT("UStatusComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
