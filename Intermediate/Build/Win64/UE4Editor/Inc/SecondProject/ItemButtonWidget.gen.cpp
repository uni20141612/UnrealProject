// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/ItemButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemButtonWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UItemButtonWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UItemButtonWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryListWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UToolTipWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UItemButtonWidget::execOnClickedButtonItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemButtonWidget::execOnHoveredButtonItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoveredButtonItem();
		P_NATIVE_END;
	}
	void UItemButtonWidget::StaticRegisterNativesUItemButtonWidget()
	{
		UClass* Class = UItemButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickedButtonItem", &UItemButtonWidget::execOnClickedButtonItem },
			{ "OnHoveredButtonItem", &UItemButtonWidget::execOnHoveredButtonItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemButtonWidget, nullptr, "OnClickedButtonItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemButtonWidget, nullptr, "OnHoveredButtonItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemButtonWidget_NoRegister()
	{
		return UItemButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_ItemImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_ItemImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_ItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_ItemList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toolTipWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_toolTipWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myToolTipWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myToolTipWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemButtonWidget_OnClickedButtonItem, "OnClickedButtonItem" }, // 655099354
		{ &Z_Construct_UFunction_UItemButtonWidget_OnHoveredButtonItem, "OnHoveredButtonItem" }, // 993609515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/ItemButtonWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Button_Item_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Button_Item = { "Button_Item", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, Button_Item), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Button_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Button_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemName = { "TextBlock_ItemName", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, TextBlock_ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemCount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemCount = { "TextBlock_ItemCount", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, TextBlock_ItemCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemDescription_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemDescription = { "TextBlock_ItemDescription", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, TextBlock_ItemDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Image_ItemImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Image_ItemImage = { "Image_ItemImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, Image_ItemImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Image_ItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Image_ItemImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_UMG_ItemList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_UMG_ItemList = { "UMG_ItemList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, UMG_ItemList), Z_Construct_UClass_UInventoryListWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_UMG_ItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_UMG_ItemList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_toolTipWidgetClass_MetaData[] = {
		{ "Category", "ItemButtonWidget" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_toolTipWidgetClass = { "toolTipWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, toolTipWidgetClass), Z_Construct_UClass_UToolTipWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_toolTipWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_toolTipWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_myToolTipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_myToolTipWidget = { "myToolTipWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemButtonWidget, myToolTipWidget), Z_Construct_UClass_UToolTipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_myToolTipWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_myToolTipWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Button_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_TextBlock_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_Image_ItemImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_UMG_ItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_toolTipWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemButtonWidget_Statics::NewProp_myToolTipWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemButtonWidget_Statics::ClassParams = {
		&UItemButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemButtonWidget, 2454200670);
	template<> SECONDPROJECT_API UClass* StaticClass<UItemButtonWidget>()
	{
		return UItemButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemButtonWidget(Z_Construct_UClass_UItemButtonWidget, &UItemButtonWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UItemButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
