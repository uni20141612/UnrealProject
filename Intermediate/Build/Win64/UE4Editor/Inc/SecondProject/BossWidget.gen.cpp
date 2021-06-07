// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/BossWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UBossWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UBossWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonster_NoRegister();
// End Cross Module References
	void UBossWidget::StaticRegisterNativesUBossWidget()
	{
	}
	UClass* Z_Construct_UClass_UBossWidget_NoRegister()
	{
		return UBossWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBossWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_BossName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_BossName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BossHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BossHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_monster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_monster;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBossWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/BossWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/BossWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossWidget_Statics::NewProp_TextBlock_BossName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BossWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBossWidget_Statics::NewProp_TextBlock_BossName = { "TextBlock_BossName", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBossWidget, TextBlock_BossName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBossWidget_Statics::NewProp_TextBlock_BossName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossWidget_Statics::NewProp_TextBlock_BossName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossWidget_Statics::NewProp_BossHP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/BossWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBossWidget_Statics::NewProp_BossHP = { "BossHP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBossWidget, BossHP), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBossWidget_Statics::NewProp_BossHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossWidget_Statics::NewProp_BossHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossWidget_Statics::NewProp_monster_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/BossWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBossWidget_Statics::NewProp_monster = { "monster", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBossWidget, monster), Z_Construct_UClass_AMonster_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBossWidget_Statics::NewProp_monster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossWidget_Statics::NewProp_monster_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossWidget_Statics::NewProp_TextBlock_BossName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossWidget_Statics::NewProp_BossHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossWidget_Statics::NewProp_monster,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBossWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBossWidget_Statics::ClassParams = {
		&UBossWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBossWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBossWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBossWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBossWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBossWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBossWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBossWidget, 3739284102);
	template<> SECONDPROJECT_API UClass* StaticClass<UBossWidget>()
	{
		return UBossWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBossWidget(Z_Construct_UClass_UBossWidget, &UBossWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UBossWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBossWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
