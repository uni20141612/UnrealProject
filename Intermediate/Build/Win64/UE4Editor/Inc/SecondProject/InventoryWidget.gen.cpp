// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/InventoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryListWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UItemInformationWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UPlayerInformationWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryWidget::execOnClickedButtonEquipment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonEquipment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryWidget::execOnClickedButtonInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryWidget::execOnVisibilityChange)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVisibilityChange(ESlateVisibility(Z_Param_InVisibility));
		P_NATIVE_END;
	}
	void UInventoryWidget::StaticRegisterNativesUInventoryWidget()
	{
		UClass* Class = UInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickedButtonEquipment", &UInventoryWidget::execOnClickedButtonEquipment },
			{ "OnClickedButtonInventory", &UInventoryWidget::execOnClickedButtonInventory },
			{ "OnVisibilityChange", &UInventoryWidget::execOnVisibilityChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "OnClickedButtonEquipment", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "OnClickedButtonInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics
	{
		struct InventoryWidget_eventOnVisibilityChange_Parms
		{
			ESlateVisibility InVisibility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryWidget_eventOnVisibilityChange_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::NewProp_InVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "OnVisibilityChange", nullptr, nullptr, sizeof(InventoryWidget_eventOnVisibilityChange_Parms), Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryWidget_NoRegister()
	{
		return UInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Equipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Equipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSwitcher_Switcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetSwitcher_Switcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_InventoryList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_InventoryList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_ItemInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_ItemInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_PlayerInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_PlayerInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryWidget_OnClickedButtonEquipment, "OnClickedButtonEquipment" }, // 1641644053
		{ &Z_Construct_UFunction_UInventoryWidget_OnClickedButtonInventory, "OnClickedButtonInventory" }, // 2157094178
		{ &Z_Construct_UFunction_UInventoryWidget_OnVisibilityChange, "OnVisibilityChange" }, // 3085174675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/InventoryWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Inventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Inventory = { "Button_Inventory", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, Button_Inventory), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Equipment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Equipment = { "Button_Equipment", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, Button_Equipment), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Equipment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Equipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WidgetSwitcher_Switcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WidgetSwitcher_Switcher = { "WidgetSwitcher_Switcher", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, WidgetSwitcher_Switcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WidgetSwitcher_Switcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WidgetSwitcher_Switcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_InventoryList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_InventoryList = { "UMG_InventoryList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, UMG_InventoryList), Z_Construct_UClass_UInventoryListWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_InventoryList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_InventoryList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_ItemInformation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_ItemInformation = { "UMG_ItemInformation", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, UMG_ItemInformation), Z_Construct_UClass_UItemInformationWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_ItemInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_ItemInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_PlayerInformation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_PlayerInformation = { "UMG_PlayerInformation", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, UMG_PlayerInformation), Z_Construct_UClass_UPlayerInformationWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_PlayerInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_PlayerInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_Button_Equipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WidgetSwitcher_Switcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_InventoryList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_ItemInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_UMG_PlayerInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWidget_Statics::ClassParams = {
		&UInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryWidget, 2608751130);
	template<> SECONDPROJECT_API UClass* StaticClass<UInventoryWidget>()
	{
		return UInventoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryWidget(Z_Construct_UClass_UInventoryWidget, &UInventoryWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UInventoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
