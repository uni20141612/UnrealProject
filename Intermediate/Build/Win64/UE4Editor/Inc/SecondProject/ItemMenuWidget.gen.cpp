// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/ItemMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemMenuWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UItemMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UItemMenuWidget::execOnClickedButtonCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidget::execOnClickedButtonRemove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonRemove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidget::execOnClickedButtonDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonDrop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemMenuWidget::execOnClickedButtonUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButtonUse();
		P_NATIVE_END;
	}
	void UItemMenuWidget::StaticRegisterNativesUItemMenuWidget()
	{
		UClass* Class = UItemMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickedButtonCancel", &UItemMenuWidget::execOnClickedButtonCancel },
			{ "OnClickedButtonDrop", &UItemMenuWidget::execOnClickedButtonDrop },
			{ "OnClickedButtonRemove", &UItemMenuWidget::execOnClickedButtonRemove },
			{ "OnClickedButtonUse", &UItemMenuWidget::execOnClickedButtonUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidget, nullptr, "OnClickedButtonCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidget, nullptr, "OnClickedButtonDrop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidget, nullptr, "OnClickedButtonRemove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemMenuWidget, nullptr, "OnClickedButtonUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemMenuWidget_NoRegister()
	{
		return UItemMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Use_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Use;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Drop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Drop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Remove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Remove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Cancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Cancel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonCancel, "OnClickedButtonCancel" }, // 1045144476
		{ &Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonDrop, "OnClickedButtonDrop" }, // 2368657766
		{ &Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonRemove, "OnClickedButtonRemove" }, // 1536187235
		{ &Z_Construct_UFunction_UItemMenuWidget_OnClickedButtonUse, "OnClickedButtonUse" }, // 410268847
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/ItemMenuWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Use_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Use = { "Button_Use", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemMenuWidget, Button_Use), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Use_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Use_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Drop_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Drop = { "Button_Drop", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemMenuWidget, Button_Drop), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Drop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Drop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Remove_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Remove = { "Button_Remove", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemMenuWidget, Button_Remove), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Remove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Remove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Cancel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/ItemMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Cancel = { "Button_Cancel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemMenuWidget, Button_Cancel), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Cancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Cancel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Use,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Drop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Remove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemMenuWidget_Statics::NewProp_Button_Cancel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemMenuWidget_Statics::ClassParams = {
		&UItemMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemMenuWidget, 3614470725);
	template<> SECONDPROJECT_API UClass* StaticClass<UItemMenuWidget>()
	{
		return UItemMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemMenuWidget(Z_Construct_UClass_UItemMenuWidget, &UItemMenuWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UItemMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
