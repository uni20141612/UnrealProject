// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Monster/AI/Task/Task_PlayRandomAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_PlayRandomAnimation() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UTask_PlayRandomAnimation_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UTask_PlayRandomAnimation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	void UTask_PlayRandomAnimation::StaticRegisterNativesUTask_PlayRandomAnimation()
	{
	}
	UClass* Z_Construct_UClass_UTask_PlayRandomAnimation_NoRegister()
	{
		return UTask_PlayRandomAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UTask_PlayRandomAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Montages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_Comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_Comp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/Monster/AI/Task/Task_PlayRandomAnimation.h" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_PlayRandomAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_Montages_MetaData[] = {
		{ "Category", "Task_PlayRandomAnimation" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_PlayRandomAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_PlayRandomAnimation, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_Montages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_BT_Comp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Monster/AI/Task/Task_PlayRandomAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_BT_Comp = { "BT_Comp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_PlayRandomAnimation, BT_Comp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_BT_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_BT_Comp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_Montages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_Montages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::NewProp_BT_Comp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_PlayRandomAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::ClassParams = {
		&UTask_PlayRandomAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_PlayRandomAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTask_PlayRandomAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTask_PlayRandomAnimation, 1926148424);
	template<> SECONDPROJECT_API UClass* StaticClass<UTask_PlayRandomAnimation>()
	{
		return UTask_PlayRandomAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTask_PlayRandomAnimation(Z_Construct_UClass_UTask_PlayRandomAnimation, &UTask_PlayRandomAnimation::StaticClass, TEXT("/Script/SecondProject"), TEXT("UTask_PlayRandomAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_PlayRandomAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
