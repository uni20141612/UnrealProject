// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/PlayerInformationWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInformationWidget() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UPlayerInformationWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UPlayerInformationWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerInformationWidget::execSetPlayerInformation)
	{
		P_GET_OBJECT(UStatusComponent,Z_Param_statComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerInformation(Z_Param_statComp);
		P_NATIVE_END;
	}
	void UPlayerInformationWidget::StaticRegisterNativesUPlayerInformationWidget()
	{
		UClass* Class = UPlayerInformationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayerInformation", &UPlayerInformationWidget::execSetPlayerInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics
	{
		struct PlayerInformationWidget_eventSetPlayerInformation_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::NewProp_statComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::NewProp_statComp = { "statComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInformationWidget_eventSetPlayerInformation_Parms, statComp), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::NewProp_statComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::NewProp_statComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::NewProp_statComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInformationWidget, nullptr, "SetPlayerInformation", nullptr, nullptr, sizeof(PlayerInformationWidget_eventSetPlayerInformation_Parms), Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInformationWidget_NoRegister()
	{
		return UPlayerInformationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInformationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_CurrentHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_CurrentHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_CurrentSP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_CurrentSP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Dam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Dam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Def_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Def;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInformationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInformationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInformationWidget_SetPlayerInformation, "SetPlayerInformation" }, // 232756245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/PlayerInformationWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP = { "TextBlock_CurrentHP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_CurrentHP), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP = { "TextBlock_CurrentSP", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_CurrentSP), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Dam_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Dam = { "TextBlock_Dam", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_Dam), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Dam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Dam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Def_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerInformationWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Def = { "TextBlock_Def", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_Def), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Def_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Def_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInformationWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_CurrentSP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Dam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInformationWidget_Statics::NewProp_TextBlock_Def,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInformationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInformationWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInformationWidget_Statics::ClassParams = {
		&UPlayerInformationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInformationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInformationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInformationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInformationWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInformationWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInformationWidget, 3966127983);
	template<> SECONDPROJECT_API UClass* StaticClass<UPlayerInformationWidget>()
	{
		return UPlayerInformationWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInformationWidget(Z_Construct_UClass_UPlayerInformationWidget, &UPlayerInformationWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UPlayerInformationWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInformationWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
