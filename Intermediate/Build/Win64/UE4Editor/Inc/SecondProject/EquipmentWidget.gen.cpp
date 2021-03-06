// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/EquipmentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentItemListWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEquipmentWidget::execSetPlayerInformation)
	{
		P_GET_OBJECT(UStatusComponent,Z_Param_statComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerInformation(Z_Param_statComp);
		P_NATIVE_END;
	}
	void UEquipmentWidget::StaticRegisterNativesUEquipmentWidget()
	{
		UClass* Class = UEquipmentWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayerInformation", &UEquipmentWidget::execSetPlayerInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics
	{
		struct EquipmentWidget_eventSetPlayerInformation_Parms
		{
			UStatusComponent* statComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_statComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::NewProp_statComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::NewProp_statComp = { "statComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentWidget_eventSetPlayerInformation_Parms, statComp), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::NewProp_statComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::NewProp_statComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::NewProp_statComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentWidget, nullptr, "SetPlayerInformation", nullptr, nullptr, sizeof(EquipmentWidget_eventSetPlayerInformation_Parms), Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquipmentWidget_NoRegister()
	{
		return UEquipmentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentItemList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentButton_Helmet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentButton_Helmet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentButton_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentButton_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentButton_Chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentButton_Chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentButton_Shield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentButton_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentButton_Gloves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentButton_Gloves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentButton_Legs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentButton_Legs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMG_EquipmentButton_Boots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMG_EquipmentButton_Boots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Dam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Dam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Def_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Def;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_Quick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_Quick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentWidget_SetPlayerInformation, "SetPlayerInformation" }, // 626368693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/EquipmentWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentItemList_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentItemList = { "UMG_EquipmentItemList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentItemList), Z_Construct_UClass_UEquipmentItemListWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentItemList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Helmet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Helmet = { "UMG_EquipmentButton_Helmet", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentButton_Helmet), Z_Construct_UClass_UEquipmentButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Helmet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Helmet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Weapon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Weapon = { "UMG_EquipmentButton_Weapon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentButton_Weapon), Z_Construct_UClass_UEquipmentButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Chest_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Chest = { "UMG_EquipmentButton_Chest", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentButton_Chest), Z_Construct_UClass_UEquipmentButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Shield_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Shield = { "UMG_EquipmentButton_Shield", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentButton_Shield), Z_Construct_UClass_UEquipmentButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Gloves_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Gloves = { "UMG_EquipmentButton_Gloves", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentButton_Gloves), Z_Construct_UClass_UEquipmentButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Gloves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Gloves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Legs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Legs = { "UMG_EquipmentButton_Legs", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentButton_Legs), Z_Construct_UClass_UEquipmentButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Legs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Legs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Boots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Boots = { "UMG_EquipmentButton_Boots", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, UMG_EquipmentButton_Boots), Z_Construct_UClass_UEquipmentButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Boots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Boots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Dam_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Dam = { "TextBlock_Dam", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, TextBlock_Dam), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Dam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Dam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Def_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Def = { "TextBlock_Def", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, TextBlock_Def), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Def_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Def_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_HorizontalBox_Quick_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_HorizontalBox_Quick = { "HorizontalBox_Quick", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentWidget, HorizontalBox_Quick), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_HorizontalBox_Quick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_HorizontalBox_Quick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Helmet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Gloves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Legs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_UMG_EquipmentButton_Boots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Dam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_TextBlock_Def,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentWidget_Statics::NewProp_HorizontalBox_Quick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentWidget_Statics::ClassParams = {
		&UEquipmentWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentWidget, 3103470652);
	template<> SECONDPROJECT_API UClass* StaticClass<UEquipmentWidget>()
	{
		return UEquipmentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentWidget(Z_Construct_UClass_UEquipmentWidget, &UEquipmentWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UEquipmentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
