// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/DragShadowWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragShadowWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UDragShadowWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UDragShadowWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
// End Cross Module References
	void UDragShadowWidget::StaticRegisterNativesUDragShadowWidget()
	{
	}
	UClass* Z_Construct_UClass_UDragShadowWidget_NoRegister()
	{
		return UDragShadowWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDragShadowWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dragOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sizeBox_Override_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sizeBox_Override;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragShadowWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragShadowWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/DragShadowWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/DragShadowWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_widgetReference_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/DragShadowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_widgetReference = { "widgetReference", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragShadowWidget, widgetReference), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_widgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_widgetReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_dragOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/DragShadowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_dragOffset = { "dragOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragShadowWidget, dragOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_dragOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_dragOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_sizeBox_Override_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/DragShadowWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_sizeBox_Override = { "sizeBox_Override", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragShadowWidget, sizeBox_Override), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_sizeBox_Override_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_sizeBox_Override_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragShadowWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_widgetReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_dragOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragShadowWidget_Statics::NewProp_sizeBox_Override,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragShadowWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragShadowWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragShadowWidget_Statics::ClassParams = {
		&UDragShadowWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragShadowWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragShadowWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragShadowWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragShadowWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragShadowWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragShadowWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragShadowWidget, 2955643178);
	template<> SECONDPROJECT_API UClass* StaticClass<UDragShadowWidget>()
	{
		return UDragShadowWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragShadowWidget(Z_Construct_UClass_UDragShadowWidget, &UDragShadowWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UDragShadowWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragShadowWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
