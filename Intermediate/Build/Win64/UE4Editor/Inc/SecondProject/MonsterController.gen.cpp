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
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EAIMoveState();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonsterController_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonsterController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonster_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics
	{
		struct _Script_SecondProject_eventChangeMoveState_Parms
		{
			EAIMoveState newState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SecondProject_eventChangeMoveState_Parms, newState), Z_Construct_UEnum_SecondProject_EAIMoveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Monster/Controller/MonsterController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondProject, nullptr, "ChangeMoveState__DelegateSignature", nullptr, nullptr, sizeof(_Script_SecondProject_eventChangeMoveState_Parms), Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMonsterController::execStopBehaviorTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBehaviorTree();
		P_NATIVE_END;
	}
	void AMonsterController::StaticRegisterNativesAMonsterController()
	{
		UClass* Class = AMonsterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StopBehaviorTree", &AMonsterController::execStopBehaviorTree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonsterController_StopBehaviorTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonsterController_StopBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Monster/Controller/MonsterController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonsterController_StopBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonsterController, nullptr, "StopBehaviorTree", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonsterController_StopBehaviorTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterController_StopBehaviorTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonsterController_StopBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonsterController_StopBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonsterController_NoRegister()
	{
		return AMonsterController::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonsterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonsterController_StopBehaviorTree, "StopBehaviorTree" }, // 1049912941
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
		FuncInfo,
		Z_Construct_UClass_AMonsterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AMonsterController, 2531774255);
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
