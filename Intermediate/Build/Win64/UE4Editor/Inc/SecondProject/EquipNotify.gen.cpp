// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Player/Animation/Notify/EquipNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipNotify() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipNotify_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void UEquipNotify::StaticRegisterNativesUEquipNotify()
	{
	}
	UClass* Z_Construct_UClass_UEquipNotify_NoRegister()
	{
		return UEquipNotify::StaticClass();
	}
	struct Z_Construct_UClass_UEquipNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEquip_MetaData[];
#endif
		static void NewProp_bEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Player/Animation/Notify/EquipNotify.h" },
		{ "ModuleRelativePath", "Public/Character/Player/Animation/Notify/EquipNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipNotify_Statics::NewProp_bEquip_MetaData[] = {
		{ "Category", "EquipNotify" },
		{ "ModuleRelativePath", "Public/Character/Player/Animation/Notify/EquipNotify.h" },
	};
#endif
	void Z_Construct_UClass_UEquipNotify_Statics::NewProp_bEquip_SetBit(void* Obj)
	{
		((UEquipNotify*)Obj)->bEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipNotify_Statics::NewProp_bEquip = { "bEquip", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEquipNotify), &Z_Construct_UClass_UEquipNotify_Statics::NewProp_bEquip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipNotify_Statics::NewProp_bEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipNotify_Statics::NewProp_bEquip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipNotify_Statics::NewProp_bEquip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipNotify_Statics::ClassParams = {
		&UEquipNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipNotify, 2104208982);
	template<> SECONDPROJECT_API UClass* StaticClass<UEquipNotify>()
	{
		return UEquipNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipNotify(Z_Construct_UClass_UEquipNotify, &UEquipNotify::StaticClass, TEXT("/Script/SecondProject"), TEXT("UEquipNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
