// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Item/TwoHandedActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwoHandedActor() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_ATwoHandedActor_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ATwoHandedActor();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AEquipmentActor();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void ATwoHandedActor::StaticRegisterNativesATwoHandedActor()
	{
	}
	UClass* Z_Construct_UClass_ATwoHandedActor_NoRegister()
	{
		return ATwoHandedActor::StaticClass();
	}
	struct Z_Construct_UClass_ATwoHandedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATwoHandedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipmentActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATwoHandedActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item/TwoHandedActor.h" },
		{ "ModuleRelativePath", "Public/Item/TwoHandedActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATwoHandedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwoHandedActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATwoHandedActor_Statics::ClassParams = {
		&ATwoHandedActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATwoHandedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATwoHandedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATwoHandedActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATwoHandedActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATwoHandedActor, 2104807477);
	template<> SECONDPROJECT_API UClass* StaticClass<ATwoHandedActor>()
	{
		return ATwoHandedActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATwoHandedActor(Z_Construct_UClass_ATwoHandedActor, &ATwoHandedActor::StaticClass, TEXT("/Script/SecondProject"), TEXT("ATwoHandedActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATwoHandedActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
