// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/ToolTipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolTipWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UToolTipWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UToolTipWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UToolTipWidget::StaticRegisterNativesUToolTipWidget()
	{
	}
	UClass* Z_Construct_UClass_UToolTipWidget_NoRegister()
	{
		return UToolTipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UToolTipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ToolTip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolTipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolTipWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/ToolTipWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/ToolTipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolTipWidget_Statics::NewProp_TextBlock_ToolTip_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ToolTipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolTipWidget_Statics::NewProp_TextBlock_ToolTip = { "TextBlock_ToolTip", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToolTipWidget, TextBlock_ToolTip), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToolTipWidget_Statics::NewProp_TextBlock_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolTipWidget_Statics::NewProp_TextBlock_ToolTip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolTipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolTipWidget_Statics::NewProp_TextBlock_ToolTip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolTipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolTipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToolTipWidget_Statics::ClassParams = {
		&UToolTipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolTipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolTipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToolTipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolTipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolTipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToolTipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToolTipWidget, 3015679686);
	template<> SECONDPROJECT_API UClass* StaticClass<UToolTipWidget>()
	{
		return UToolTipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToolTipWidget(Z_Construct_UClass_UToolTipWidget, &UToolTipWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UToolTipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolTipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
