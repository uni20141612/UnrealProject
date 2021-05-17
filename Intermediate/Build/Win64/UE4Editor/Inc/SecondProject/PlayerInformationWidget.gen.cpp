// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/PlayerInformationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInformationWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UPlayerInformationWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UPlayerInformationWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UPlayerInformationWidget::StaticRegisterNativesUPlayerInformationWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerInformationWidget_NoRegister()
	{
		return UPlayerInformationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInformationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_CurrentHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_CurrentHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_CurrentSP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_CurrentSP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInformationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/PlayerInformationWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP = { "TextBlock_CurrentHP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_CurrentHP), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP = { "TextBlock_CurrentSP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_CurrentSP), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInformationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInformationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInformationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInformationWidget_Statics::ClassParams = {
		&UPlayerInformationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerInformationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInformationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInformationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInformationWidget, 2515120933);
	template<> SECONDPROJECT_API UClass* StaticClass<UPlayerInformationWidget>()
	{
		return UPlayerInformationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInformationWidget(Z_Construct_UClass_UPlayerInformationWidget, &UPlayerInformationWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UPlayerInformationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInformationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
