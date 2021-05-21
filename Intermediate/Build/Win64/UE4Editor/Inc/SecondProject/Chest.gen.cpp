// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Item/Chest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChest() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_AChest_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AChest();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AEquipment();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void AChest::StaticRegisterNativesAChest()
	{
	}
	UClass* Z_Construct_UClass_AChest_NoRegister()
	{
		return AChest::StaticClass();
	}
	struct Z_Construct_UClass_AChest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item/Chest.h" },
		{ "ModuleRelativePath", "Public/Item/Chest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChest_Statics::ClassParams = {
		&AChest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChest, 1583588717);
	template<> SECONDPROJECT_API UClass* StaticClass<AChest>()
	{
		return AChest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChest(Z_Construct_UClass_AChest, &AChest::StaticClass, TEXT("/Script/SecondProject"), TEXT("AChest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
