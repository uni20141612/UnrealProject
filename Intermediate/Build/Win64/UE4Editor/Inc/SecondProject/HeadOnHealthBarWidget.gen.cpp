// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/HeadOnHealthBarWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadOnHealthBarWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UHeadOnHealthBarWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UHeadOnHealthBarWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UHeadOnHealthBarWidget::StaticRegisterNativesUHeadOnHealthBarWidget()
	{
	}
	UClass* Z_Construct_UClass_UHeadOnHealthBarWidget_NoRegister()
	{
		return UHeadOnHealthBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHeadOnHealthBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_HP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/HeadOnHealthBarWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/HeadOnHealthBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::NewProp_ProgressBar_HP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/HeadOnHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::NewProp_ProgressBar_HP = { "ProgressBar_HP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadOnHealthBarWidget, ProgressBar_HP), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::NewProp_ProgressBar_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::NewProp_ProgressBar_HP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::NewProp_ProgressBar_HP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadOnHealthBarWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::ClassParams = {
		&UHeadOnHealthBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadOnHealthBarWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeadOnHealthBarWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeadOnHealthBarWidget, 3295871567);
	template<> SECONDPROJECT_API UClass* StaticClass<UHeadOnHealthBarWidget>()
	{
		return UHeadOnHealthBarWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadOnHealthBarWidget(Z_Construct_UClass_UHeadOnHealthBarWidget, &UHeadOnHealthBarWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UHeadOnHealthBarWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadOnHealthBarWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
