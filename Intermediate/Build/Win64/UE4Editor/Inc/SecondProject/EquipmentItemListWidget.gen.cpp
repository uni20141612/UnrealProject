// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/EquipmentItemListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentItemListWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentItemListWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentItemListWidget();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryListWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UDragItemButtonWidget_NoRegister();
// End Cross Module References
	void UEquipmentItemListWidget::StaticRegisterNativesUEquipmentItemListWidget()
	{
	}
	UClass* Z_Construct_UClass_UEquipmentItemListWidget_NoRegister()
	{
		return UEquipmentItemListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentItemListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragItemButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_dragItemButtonWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentItemListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInventoryListWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentItemListWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/EquipmentItemListWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentItemListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentItemListWidget_Statics::NewProp_dragItemButtonWidgetClass_MetaData[] = {
		{ "Category", "EquipmentItemListWidget" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentItemListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentItemListWidget_Statics::NewProp_dragItemButtonWidgetClass = { "dragItemButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentItemListWidget, dragItemButtonWidgetClass), Z_Construct_UClass_UDragItemButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEquipmentItemListWidget_Statics::NewProp_dragItemButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentItemListWidget_Statics::NewProp_dragItemButtonWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentItemListWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentItemListWidget_Statics::NewProp_dragItemButtonWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentItemListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentItemListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentItemListWidget_Statics::ClassParams = {
		&UEquipmentItemListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentItemListWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentItemListWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentItemListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentItemListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentItemListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentItemListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentItemListWidget, 752505289);
	template<> SECONDPROJECT_API UClass* StaticClass<UEquipmentItemListWidget>()
	{
		return UEquipmentItemListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentItemListWidget(Z_Construct_UClass_UEquipmentItemListWidget, &UEquipmentItemListWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UEquipmentItemListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentItemListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
