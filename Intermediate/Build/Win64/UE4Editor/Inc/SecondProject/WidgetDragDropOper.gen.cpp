// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/WidgetDragDropOper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetDragDropOper() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UWidgetDragDropOper_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UWidgetDragDropOper();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UWidgetDragDropOper::StaticRegisterNativesUWidgetDragDropOper()
	{
	}
	UClass* Z_Construct_UClass_UWidgetDragDropOper_NoRegister()
	{
		return UWidgetDragDropOper::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetDragDropOper_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetDragDropOper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDragDropOper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/WidgetDragDropOper.h" },
		{ "ModuleRelativePath", "Public/Widget/WidgetDragDropOper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_widgetReference_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/WidgetDragDropOper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_widgetReference = { "widgetReference", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetDragDropOper, widgetReference), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_widgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_widgetReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_dragOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/WidgetDragDropOper.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_dragOffset = { "dragOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetDragDropOper, dragOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_dragOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_dragOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetDragDropOper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_widgetReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDragDropOper_Statics::NewProp_dragOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetDragDropOper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetDragDropOper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetDragDropOper_Statics::ClassParams = {
		&UWidgetDragDropOper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetDragDropOper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDragDropOper_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetDragDropOper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDragDropOper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetDragDropOper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetDragDropOper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetDragDropOper, 290927548);
	template<> SECONDPROJECT_API UClass* StaticClass<UWidgetDragDropOper>()
	{
		return UWidgetDragDropOper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetDragDropOper(Z_Construct_UClass_UWidgetDragDropOper, &UWidgetDragDropOper::StaticClass, TEXT("/Script/SecondProject"), TEXT("UWidgetDragDropOper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetDragDropOper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
