// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Player/Animation/NotifyState/CheckInputNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckInputNotifyState() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UCheckInputNotifyState_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UCheckInputNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
// End Cross Module References
	void UCheckInputNotifyState::StaticRegisterNativesUCheckInputNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UCheckInputNotifyState_NoRegister()
	{
		return UCheckInputNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UCheckInputNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_nextSection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckInputNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckInputNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Player/Animation/NotifyState/CheckInputNotifyState.h" },
		{ "ModuleRelativePath", "Public/Character/Player/Animation/NotifyState/CheckInputNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Player/Animation/NotifyState/CheckInputNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000000010, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckInputNotifyState, Player), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_nextSection_MetaData[] = {
		{ "Category", "CheckInputNotifyState" },
		{ "ModuleRelativePath", "Public/Character/Player/Animation/NotifyState/CheckInputNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_nextSection = { "nextSection", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckInputNotifyState, nextSection), METADATA_PARAMS(Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_nextSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_nextSection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckInputNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckInputNotifyState_Statics::NewProp_nextSection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckInputNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckInputNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckInputNotifyState_Statics::ClassParams = {
		&UCheckInputNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckInputNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckInputNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckInputNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckInputNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckInputNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckInputNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckInputNotifyState, 2862059393);
	template<> SECONDPROJECT_API UClass* StaticClass<UCheckInputNotifyState>()
	{
		return UCheckInputNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckInputNotifyState(Z_Construct_UClass_UCheckInputNotifyState, &UCheckInputNotifyState::StaticClass, TEXT("/Script/SecondProject"), TEXT("UCheckInputNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckInputNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
