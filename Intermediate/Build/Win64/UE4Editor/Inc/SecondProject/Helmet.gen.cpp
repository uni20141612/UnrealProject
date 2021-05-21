// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Item/Helmet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelmet() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_AHelmet_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AHelmet();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AEquipment();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void AHelmet::StaticRegisterNativesAHelmet()
	{
	}
	UClass* Z_Construct_UClass_AHelmet_NoRegister()
	{
		return AHelmet::StaticClass();
	}
	struct Z_Construct_UClass_AHelmet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelmet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelmet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item/Helmet.h" },
		{ "ModuleRelativePath", "Public/Item/Helmet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelmet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelmet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHelmet_Statics::ClassParams = {
		&AHelmet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHelmet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHelmet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelmet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHelmet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelmet, 60120113);
	template<> SECONDPROJECT_API UClass* StaticClass<AHelmet>()
	{
		return AHelmet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelmet(Z_Construct_UClass_AHelmet, &AHelmet::StaticClass, TEXT("/Script/SecondProject"), TEXT("AHelmet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelmet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
