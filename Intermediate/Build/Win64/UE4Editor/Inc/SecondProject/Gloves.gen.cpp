// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Item/Gloves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGloves() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_AGloves_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AGloves();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AEquipment();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void AGloves::StaticRegisterNativesAGloves()
	{
	}
	UClass* Z_Construct_UClass_AGloves_NoRegister()
	{
		return AGloves::StaticClass();
	}
	struct Z_Construct_UClass_AGloves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGloves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGloves_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item/Gloves.h" },
		{ "ModuleRelativePath", "Public/Item/Gloves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGloves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGloves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGloves_Statics::ClassParams = {
		&AGloves::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGloves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGloves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGloves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGloves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGloves, 4218841357);
	template<> SECONDPROJECT_API UClass* StaticClass<AGloves>()
	{
		return AGloves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGloves(Z_Construct_UClass_AGloves, &AGloves::StaticClass, TEXT("/Script/SecondProject"), TEXT("AGloves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGloves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
