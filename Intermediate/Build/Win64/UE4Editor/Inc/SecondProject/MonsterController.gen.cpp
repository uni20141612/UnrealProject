// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Monster/Controller/MonsterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterController() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonsterController_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonsterController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonster_NoRegister();
// End Cross Module References
	void AMonsterController::StaticRegisterNativesAMonsterController()
	{
	}
	UClass* Z_Construct_UClass_AMonsterController_NoRegister()
	{
		return AMonsterController::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerMonster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerMonster;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Character/Monster/Controller/MonsterController.h" },
		{ "ModuleRelativePath", "Public/Character/Monster/Controller/MonsterController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterController_Statics::NewProp_OwnerMonster_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Monster/Controller/MonsterController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterController_Statics::NewProp_OwnerMonster = { "OwnerMonster", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterController, OwnerMonster), Z_Construct_UClass_AMonster_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterController_Statics::NewProp_OwnerMonster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterController_Statics::NewProp_OwnerMonster_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterController_Statics::NewProp_OwnerMonster,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterController_Statics::ClassParams = {
		&AMonsterController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterController, 1433908155);
	template<> SECONDPROJECT_API UClass* StaticClass<AMonsterController>()
	{
		return AMonsterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterController(Z_Construct_UClass_AMonsterController, &AMonsterController::StaticClass, TEXT("/Script/SecondProject"), TEXT("AMonsterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
