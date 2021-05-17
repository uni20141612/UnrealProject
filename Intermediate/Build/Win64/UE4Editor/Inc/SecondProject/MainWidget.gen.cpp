// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/MainWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UMainWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
// End Cross Module References
	void UMainWidget::StaticRegisterNativesUMainWidget()
	{
	}
	UClass* Z_Construct_UClass_UMainWidget_NoRegister()
	{
		return UMainWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_SP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_SP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/MainWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/MainWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_HP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/MainWidget.h" },
		{ "OverrideNativeName", "ProgressBar_HP" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_HP = { "ProgressBar_HP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainWidget, ProgressBar_HP), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_SP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/MainWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_SP = { "ProgressBar_SP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainWidget, ProgressBar_SP), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_SP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_SP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/MainWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainWidget, player), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_ProgressBar_SP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainWidget_Statics::ClassParams = {
		&UMainWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainWidget, 417729584);
	template<> SECONDPROJECT_API UClass* StaticClass<UMainWidget>()
	{
		return UMainWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainWidget(Z_Construct_UClass_UMainWidget, &UMainWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UMainWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
