// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Player/Controller/CustomController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomController() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_ACustomController_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ACustomController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UBossWidget_NoRegister();
// End Cross Module References
	void ACustomController::StaticRegisterNativesACustomController()
	{
	}
	UClass* Z_Construct_UClass_ACustomController_NoRegister()
	{
		return ACustomController::StaticClass();
	}
	struct Z_Construct_UClass_ACustomController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mainWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lockOnWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_lockOnWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lockOnWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lockOnWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inventoryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventoryWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bossWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bossWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bossWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bossWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Character/Player/Controller/CustomController.h" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidgetClass_MetaData[] = {
		{ "Category", "CustomController" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidgetClass = { "mainWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, mainWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidget = { "mainWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, mainWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidgetClass_MetaData[] = {
		{ "Category", "CustomController" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidgetClass = { "lockOnWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, lockOnWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidget = { "lockOnWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, lockOnWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidgetClass_MetaData[] = {
		{ "Category", "CustomController" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidgetClass = { "inventoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, inventoryWidgetClass), Z_Construct_UClass_UInventoryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidget = { "inventoryWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, inventoryWidget), Z_Construct_UClass_UInventoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidgetClass_MetaData[] = {
		{ "Category", "CustomController" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidgetClass = { "bossWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, bossWidgetClass), Z_Construct_UClass_UBossWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/Controller/CustomController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidget = { "bossWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomController, bossWidget), Z_Construct_UClass_UBossWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_mainWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_lockOnWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_inventoryWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomController_Statics::NewProp_bossWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomController_Statics::ClassParams = {
		&ACustomController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACustomController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomController, 2023197257);
	template<> SECONDPROJECT_API UClass* StaticClass<ACustomController>()
	{
		return ACustomController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomController(Z_Construct_UClass_ACustomController, &ACustomController::StaticClass, TEXT("/Script/SecondProject"), TEXT("ACustomController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
