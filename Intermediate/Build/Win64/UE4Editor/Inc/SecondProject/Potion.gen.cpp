// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Item/Potion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotion() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_APotion_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_APotion();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AItemActor();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void APotion::StaticRegisterNativesAPotion()
	{
	}
	UClass* Z_Construct_UClass_APotion_NoRegister()
	{
		return APotion::StaticClass();
	}
	struct Z_Construct_UClass_APotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItemActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item/Potion.h" },
		{ "ModuleRelativePath", "Public/Item/Potion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotion_Statics::ClassParams = {
		&APotion::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_APotion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotion, 4215811411);
	template<> SECONDPROJECT_API UClass* StaticClass<APotion>()
	{
		return APotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotion(Z_Construct_UClass_APotion, &APotion::StaticClass, TEXT("/Script/SecondProject"), TEXT("APotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
