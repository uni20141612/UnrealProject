// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/DragableWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragableWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UDragableWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UDragableWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UDragShadowWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UWidgetDragDropOper_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UDragableWidget::StaticRegisterNativesUDragableWidget()
	{
	}
	UClass* Z_Construct_UClass_UDragableWidget_NoRegister()
	{
		return UDragableWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDragableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragShadowWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_dragShadowWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragShadowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dragShadowWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetDragDropOperClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_widgetDragDropOperClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dragOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragableWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/DragableWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/DragableWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidgetClass_MetaData[] = {
		{ "Category", "DragableWidget" },
		{ "ModuleRelativePath", "Public/Widget/DragableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidgetClass = { "dragShadowWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragableWidget, dragShadowWidgetClass), Z_Construct_UClass_UDragShadowWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/DragableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidget = { "dragShadowWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragableWidget, dragShadowWidget), Z_Construct_UClass_UDragShadowWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragableWidget_Statics::NewProp_widgetDragDropOperClass_MetaData[] = {
		{ "Category", "DragableWidget" },
		{ "ModuleRelativePath", "Public/Widget/DragableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDragableWidget_Statics::NewProp_widgetDragDropOperClass = { "widgetDragDropOperClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragableWidget, widgetDragDropOperClass), Z_Construct_UClass_UWidgetDragDropOper_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDragableWidget_Statics::NewProp_widgetDragDropOperClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragableWidget_Statics::NewProp_widgetDragDropOperClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/DragableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragOffset = { "dragOffset", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragableWidget, dragOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragShadowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragableWidget_Statics::NewProp_widgetDragDropOperClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragableWidget_Statics::NewProp_dragOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragableWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragableWidget_Statics::ClassParams = {
		&UDragableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragableWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragableWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragableWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragableWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragableWidget, 2500408541);
	template<> SECONDPROJECT_API UClass* StaticClass<UDragableWidget>()
	{
		return UDragableWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragableWidget(Z_Construct_UClass_UDragableWidget, &UDragableWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UDragableWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragableWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
