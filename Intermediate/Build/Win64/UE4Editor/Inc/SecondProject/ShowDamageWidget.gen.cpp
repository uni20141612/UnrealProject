// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/ShowDamageWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowDamageWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UShowDamageWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UShowDamageWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UShowDamageWidget::StaticRegisterNativesUShowDamageWidget()
	{
	}
	UClass* Z_Construct_UClass_UShowDamageWidget_NoRegister()
	{
		return UShowDamageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UShowDamageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShowDamageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowDamageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/ShowDamageWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/ShowDamageWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowDamageWidget_Statics::NewProp_TextBlock_Damage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ShowDamageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShowDamageWidget_Statics::NewProp_TextBlock_Damage = { "TextBlock_Damage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShowDamageWidget, TextBlock_Damage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShowDamageWidget_Statics::NewProp_TextBlock_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowDamageWidget_Statics::NewProp_TextBlock_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowDamageWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowDamageWidget_Statics::NewProp_TextBlock_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowDamageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowDamageWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShowDamageWidget_Statics::ClassParams = {
		&UShowDamageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShowDamageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShowDamageWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShowDamageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShowDamageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowDamageWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShowDamageWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShowDamageWidget, 2774259190);
	template<> SECONDPROJECT_API UClass* StaticClass<UShowDamageWidget>()
	{
		return UShowDamageWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShowDamageWidget(Z_Construct_UClass_UShowDamageWidget, &UShowDamageWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UShowDamageWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowDamageWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
