// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Monster/AI/Task/Task_ChangeMoveState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_ChangeMoveState() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UTask_ChangeMoveState_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UTask_ChangeMoveState();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EAIMoveState();
// End Cross Module References
	void UTask_ChangeMoveState::StaticRegisterNativesUTask_ChangeMoveState()
	{
	}
	UClass* Z_Construct_UClass_UTask_ChangeMoveState_NoRegister()
	{
		return UTask_ChangeMoveState::StaticClass();
	}
	struct Z_Construct_UClass_UTask_ChangeMoveState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_ChangeMoveState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_ChangeMoveState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/Monster/AI/Task/Task_ChangeMoveState.h" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_ChangeMoveState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTask_ChangeMoveState_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_ChangeMoveState_Statics::NewProp_newState_MetaData[] = {
		{ "Category", "Task_ChangeMoveState" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_ChangeMoveState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTask_ChangeMoveState_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_ChangeMoveState, newState), Z_Construct_UEnum_SecondProject_EAIMoveState, METADATA_PARAMS(Z_Construct_UClass_UTask_ChangeMoveState_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_ChangeMoveState_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTask_ChangeMoveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_ChangeMoveState_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_ChangeMoveState_Statics::NewProp_newState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_ChangeMoveState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_ChangeMoveState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTask_ChangeMoveState_Statics::ClassParams = {
		&UTask_ChangeMoveState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTask_ChangeMoveState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTask_ChangeMoveState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_ChangeMoveState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_ChangeMoveState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_ChangeMoveState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTask_ChangeMoveState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTask_ChangeMoveState, 4186505674);
	template<> SECONDPROJECT_API UClass* StaticClass<UTask_ChangeMoveState>()
	{
		return UTask_ChangeMoveState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTask_ChangeMoveState(Z_Construct_UClass_UTask_ChangeMoveState, &UTask_ChangeMoveState::StaticClass, TEXT("/Script/SecondProject"), TEXT("UTask_ChangeMoveState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_ChangeMoveState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
