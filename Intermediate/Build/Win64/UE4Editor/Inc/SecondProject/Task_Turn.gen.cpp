// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Monster/AI/Task/Task_Turn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_Turn() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UTask_Turn_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UTask_Turn();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UTask_Turn::StaticRegisterNativesUTask_Turn()
	{
	}
	UClass* Z_Construct_UClass_UTask_Turn_NoRegister()
	{
		return UTask_Turn::StaticClass();
	}
	struct Z_Construct_UClass_UTask_Turn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_monster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_monster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_Turn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_Turn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/Monster/AI/Task/Task_Turn.h" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_Turn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_Turn_Statics::NewProp_target_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_Turn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTask_Turn_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_Turn, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTask_Turn_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_Turn_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_Turn_Statics::NewProp_monster_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_Turn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTask_Turn_Statics::NewProp_monster = { "monster", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_Turn, monster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTask_Turn_Statics::NewProp_monster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_Turn_Statics::NewProp_monster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_Turn_Statics::NewProp_AcceptSize_MetaData[] = {
		{ "Category", "Task_Turn" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_Turn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTask_Turn_Statics::NewProp_AcceptSize = { "AcceptSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_Turn, AcceptSize), METADATA_PARAMS(Z_Construct_UClass_UTask_Turn_Statics::NewProp_AcceptSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_Turn_Statics::NewProp_AcceptSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_Turn_Statics::NewProp_interpSpeed_MetaData[] = {
		{ "Category", "Task_Turn" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_Turn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTask_Turn_Statics::NewProp_interpSpeed = { "interpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_Turn, interpSpeed), METADATA_PARAMS(Z_Construct_UClass_UTask_Turn_Statics::NewProp_interpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_Turn_Statics::NewProp_interpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTask_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_Turn_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_Turn_Statics::NewProp_monster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_Turn_Statics::NewProp_AcceptSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_Turn_Statics::NewProp_interpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_Turn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_Turn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTask_Turn_Statics::ClassParams = {
		&UTask_Turn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTask_Turn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTask_Turn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_Turn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_Turn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_Turn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTask_Turn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTask_Turn, 2137952177);
	template<> SECONDPROJECT_API UClass* StaticClass<UTask_Turn>()
	{
		return UTask_Turn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTask_Turn(Z_Construct_UClass_UTask_Turn, &UTask_Turn::StaticClass, TEXT("/Script/SecondProject"), TEXT("UTask_Turn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_Turn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
