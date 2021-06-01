// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Monster/AI/Service/CheckDistance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckDistance() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UCheckDistance_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UCheckDistance();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void UCheckDistance::StaticRegisterNativesUCheckDistance()
	{
	}
	UClass* Z_Construct_UClass_UCheckDistance_NoRegister()
	{
		return UCheckDistance::StaticClass();
	}
	struct Z_Construct_UClass_UCheckDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckDistance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/Monster/AI/Service/CheckDistance.h" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Service/CheckDistance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckDistance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckDistance_Statics::ClassParams = {
		&UCheckDistance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckDistance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckDistance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckDistance, 2699373320);
	template<> SECONDPROJECT_API UClass* StaticClass<UCheckDistance>()
	{
		return UCheckDistance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckDistance(Z_Construct_UClass_UCheckDistance, &UCheckDistance::StaticClass, TEXT("/Script/SecondProject"), TEXT("UCheckDistance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckDistance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
