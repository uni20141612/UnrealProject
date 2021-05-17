// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateLinetraceNotifyState() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UCreateLinetraceNotifyState_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UCreateLinetraceNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UCreateLinetraceNotifyState::StaticRegisterNativesUCreateLinetraceNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UCreateLinetraceNotifyState_NoRegister()
	{
		return UCreateLinetraceNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UCreateLinetraceNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_startSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_endSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLinetraceNotifyState, owner), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "CreateLinetraceNotifyState" },
		{ "ModuleRelativePath", "Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLinetraceNotifyState, radius), METADATA_PARAMS(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "CreateLinetraceNotifyState" },
		{ "ModuleRelativePath", "Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLinetraceNotifyState, damage), METADATA_PARAMS(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_startSocket_MetaData[] = {
		{ "Category", "CreateLinetraceNotifyState" },
		{ "ModuleRelativePath", "Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_startSocket = { "startSocket", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLinetraceNotifyState, startSocket), METADATA_PARAMS(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_startSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_startSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_endSocket_MetaData[] = {
		{ "Category", "CreateLinetraceNotifyState" },
		{ "ModuleRelativePath", "Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_endSocket = { "endSocket", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLinetraceNotifyState, endSocket), METADATA_PARAMS(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_endSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_endSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_hitParticle_MetaData[] = {
		{ "Category", "CreateLinetraceNotifyState" },
		{ "ModuleRelativePath", "Public/Character/Animation/NotifyState/CreateLinetraceNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_hitParticle = { "hitParticle", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateLinetraceNotifyState, hitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_hitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_hitParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_startSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_endSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::NewProp_hitParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateLinetraceNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::ClassParams = {
		&UCreateLinetraceNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateLinetraceNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreateLinetraceNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreateLinetraceNotifyState, 2738804135);
	template<> SECONDPROJECT_API UClass* StaticClass<UCreateLinetraceNotifyState>()
	{
		return UCreateLinetraceNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateLinetraceNotifyState(Z_Construct_UClass_UCreateLinetraceNotifyState, &UCreateLinetraceNotifyState::StaticClass, TEXT("/Script/SecondProject"), TEXT("UCreateLinetraceNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateLinetraceNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
