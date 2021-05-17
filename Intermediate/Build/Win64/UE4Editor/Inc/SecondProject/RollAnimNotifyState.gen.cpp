// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Player/Animation/NotifyState/RollAnimNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollAnimNotifyState() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_URollAnimNotifyState_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_URollAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
// End Cross Module References
	void URollAnimNotifyState::StaticRegisterNativesURollAnimNotifyState()
	{
	}
	UClass* Z_Construct_UClass_URollAnimNotifyState_NoRegister()
	{
		return URollAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_URollAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URollAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URollAnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Player/Animation/NotifyState/RollAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/Character/Player/Animation/NotifyState/RollAnimNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Player/Animation/NotifyState/RollAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0020080000000010, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URollAnimNotifyState, player), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "RollAnimNotifyState" },
		{ "ModuleRelativePath", "Public/Character/Player/Animation/NotifyState/RollAnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URollAnimNotifyState, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_moveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URollAnimNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URollAnimNotifyState_Statics::NewProp_moveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URollAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URollAnimNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URollAnimNotifyState_Statics::ClassParams = {
		&URollAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URollAnimNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URollAnimNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_URollAnimNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URollAnimNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URollAnimNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URollAnimNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URollAnimNotifyState, 1454919847);
	template<> SECONDPROJECT_API UClass* StaticClass<URollAnimNotifyState>()
	{
		return URollAnimNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URollAnimNotifyState(Z_Construct_UClass_URollAnimNotifyState, &URollAnimNotifyState::StaticClass, TEXT("/Script/SecondProject"), TEXT("URollAnimNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URollAnimNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
