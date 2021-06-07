// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Monster/DesertDragon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesertDragon() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_ADesertDragon_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ADesertDragon();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonster();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void ADesertDragon::StaticRegisterNativesADesertDragon()
	{
	}
	UClass* Z_Construct_UClass_ADesertDragon_NoRegister()
	{
		return ADesertDragon::StaticClass();
	}
	struct Z_Construct_UClass_ADesertDragon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesertDragon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMonster,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesertDragon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Monster/DesertDragon.h" },
		{ "ModuleRelativePath", "Public/Character/Monster/DesertDragon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesertDragon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesertDragon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADesertDragon_Statics::ClassParams = {
		&ADesertDragon::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADesertDragon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADesertDragon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesertDragon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADesertDragon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADesertDragon, 3386182768);
	template<> SECONDPROJECT_API UClass* StaticClass<ADesertDragon>()
	{
		return ADesertDragon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADesertDragon(Z_Construct_UClass_ADesertDragon, &ADesertDragon::StaticClass, TEXT("/Script/SecondProject"), TEXT("ADesertDragon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesertDragon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
