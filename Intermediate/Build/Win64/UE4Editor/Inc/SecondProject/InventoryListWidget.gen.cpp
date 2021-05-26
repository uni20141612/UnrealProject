// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/InventoryListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryListWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryListWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryListWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UItemButtonWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonConsume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonConsume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonBoots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonBoots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonLegs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonLegs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonGloves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonGloves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonChest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonChest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonHelmet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonHelmet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryListWidget::execOnClickedButtonAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonAll();
		P_NATIVE_END;
	}
	void UInventoryListWidget::StaticRegisterNativesUInventoryListWidget()
	{
		UClass* Class = UInventoryListWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickedButtonAll", &UInventoryListWidget::execOnClickedButtonAll },
			{ "OnClickedButtonBoots", &UInventoryListWidget::execOnClickedButtonBoots },
			{ "OnClickedButtonChest", &UInventoryListWidget::execOnClickedButtonChest },
			{ "OnClickedButtonConsume", &UInventoryListWidget::execOnClickedButtonConsume },
			{ "OnClickedButtonGloves", &UInventoryListWidget::execOnClickedButtonGloves },
			{ "OnClickedButtonHelmet", &UInventoryListWidget::execOnClickedButtonHelmet },
			{ "OnClickedButtonLegs", &UInventoryListWidget::execOnClickedButtonLegs },
			{ "OnClickedButtonShield", &UInventoryListWidget::execOnClickedButtonShield },
			{ "OnClickedButtonWeapon", &UInventoryListWidget::execOnClickedButtonWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonBoots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonChest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonConsume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonGloves", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonHelmet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonLegs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonShield", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryListWidget, nullptr, "OnClickedButtonWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryListWidget_NoRegister()
	{
		return UInventoryListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_All_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_All;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Shield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Helmet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Helmet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Gloves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Gloves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Legs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Legs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Boots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Boots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Consume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Consume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_ItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_ItemList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonAll, "OnClickedButtonAll" }, // 3768888351
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonBoots, "OnClickedButtonBoots" }, // 1036392659
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonChest, "OnClickedButtonChest" }, // 3559002336
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonConsume, "OnClickedButtonConsume" }, // 3796050303
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonGloves, "OnClickedButtonGloves" }, // 664702770
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonHelmet, "OnClickedButtonHelmet" }, // 1476774471
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonLegs, "OnClickedButtonLegs" }, // 2371600122
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonShield, "OnClickedButtonShield" }, // 3875381643
		{ &Z_Construct_UFunction_UInventoryListWidget_OnClickedButtonWeapon, "OnClickedButtonWeapon" }, // 7390964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/InventoryListWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemButtonWidgetClass_MetaData[] = {
		{ "Category", "InventoryListWidget" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemButtonWidgetClass = { "itemButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, itemButtonWidgetClass), Z_Construct_UClass_UItemButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidgetClass_MetaData[] = {
		{ "Category", "InventoryListWidget" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidgetClass = { "itemMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, itemMenuWidgetClass), Z_Construct_UClass_UItemMenuWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidget = { "itemMenuWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, itemMenuWidget), Z_Construct_UClass_UItemMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_All_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_All = { "Button_All", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_All), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_All_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_All_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Weapon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Weapon = { "Button_Weapon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Weapon), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Shield_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Shield = { "Button_Shield", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Shield), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Helmet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Helmet = { "Button_Helmet", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Helmet), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Helmet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Helmet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Chest_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Chest = { "Button_Chest", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Chest), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Gloves_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Gloves = { "Button_Gloves", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Gloves), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Gloves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Gloves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Legs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Legs = { "Button_Legs", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Legs), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Legs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Legs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Boots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Boots = { "Button_Boots", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Boots), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Boots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Boots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Consume_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Consume = { "Button_Consume", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, Button_Consume), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Consume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Consume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_ScrollBox_ItemList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/InventoryListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_ScrollBox_ItemList = { "ScrollBox_ItemList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryListWidget, ScrollBox_ItemList), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_ScrollBox_ItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_ScrollBox_ItemList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryListWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_itemMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_All,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Helmet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Gloves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Legs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Boots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_Button_Consume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryListWidget_Statics::NewProp_ScrollBox_ItemList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryListWidget_Statics::ClassParams = {
		&UInventoryListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryListWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryListWidget, 3810773486);
	template<> SECONDPROJECT_API UClass* StaticClass<UInventoryListWidget>()
	{
		return UInventoryListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryListWidget(Z_Construct_UClass_UInventoryListWidget, &UInventoryListWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UInventoryListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
