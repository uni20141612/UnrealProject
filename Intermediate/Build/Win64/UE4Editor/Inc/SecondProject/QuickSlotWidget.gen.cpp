// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/QuickSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickSlotWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UQuickSlotWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UQuickSlotWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuickSlotWidget::execUseQuickSlotEvent)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseQuickSlotEvent(Z_Param_Out_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuickSlotWidget::execChangeQuickSlotEvent)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeQuickSlotEvent(Z_Param_texture,Z_Param_Out_count);
		P_NATIVE_END;
	}
	void UQuickSlotWidget::StaticRegisterNativesUQuickSlotWidget()
	{
		UClass* Class = UQuickSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeQuickSlotEvent", &UQuickSlotWidget::execChangeQuickSlotEvent },
			{ "UseQuickSlotEvent", &UQuickSlotWidget::execUseQuickSlotEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics
	{
		struct QuickSlotWidget_eventChangeQuickSlotEvent_Parms
		{
			UTexture2D* texture;
			int32 count;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuickSlotWidget_eventChangeQuickSlotEvent_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::NewProp_count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuickSlotWidget_eventChangeQuickSlotEvent_Parms, count), METADATA_PARAMS(Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::NewProp_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::NewProp_count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::NewProp_texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/QuickSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickSlotWidget, nullptr, "ChangeQuickSlotEvent", nullptr, nullptr, sizeof(QuickSlotWidget_eventChangeQuickSlotEvent_Parms), Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics
	{
		struct QuickSlotWidget_eventUseQuickSlotEvent_Parms
		{
			int32 count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::NewProp_count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuickSlotWidget_eventUseQuickSlotEvent_Parms, count), METADATA_PARAMS(Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::NewProp_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::NewProp_count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/QuickSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickSlotWidget, nullptr, "UseQuickSlotEvent", nullptr, nullptr, sizeof(QuickSlotWidget_eventUseQuickSlotEvent_Parms), Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuickSlotWidget_NoRegister()
	{
		return UQuickSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuickSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuickSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuickSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickSlotWidget_ChangeQuickSlotEvent, "ChangeQuickSlotEvent" }, // 4014019113
		{ &Z_Construct_UFunction_UQuickSlotWidget_UseQuickSlotEvent, "UseQuickSlotEvent" }, // 4116329460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/QuickSlotWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/QuickSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_Image_Item_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/QuickSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_Image_Item = { "Image_Item", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuickSlotWidget, Image_Item), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_Image_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_Image_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_TextBlock_ItemCount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/QuickSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_TextBlock_ItemCount = { "TextBlock_ItemCount", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuickSlotWidget, TextBlock_ItemCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_TextBlock_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_TextBlock_ItemCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_Image_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickSlotWidget_Statics::NewProp_TextBlock_ItemCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuickSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuickSlotWidget_Statics::ClassParams = {
		&UQuickSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuickSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuickSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuickSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuickSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuickSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuickSlotWidget, 2886604093);
	template<> SECONDPROJECT_API UClass* StaticClass<UQuickSlotWidget>()
	{
		return UQuickSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuickSlotWidget(Z_Construct_UClass_UQuickSlotWidget, &UQuickSlotWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UQuickSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
