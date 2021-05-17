// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Animation/Notify/FootStepAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootStepAnimNotify() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_UFootStepAnimNotify_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UFootStepAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UFootStepAnimNotify::StaticRegisterNativesUFootStepAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UFootStepAnimNotify_NoRegister()
	{
		return UFootStepAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UFootStepAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_metalParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_metalParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waterParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_waterParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iceParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_iceParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_defaultParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_socketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_socketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootStepAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootStepAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Character/Animation/Notify/FootStepAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/FootStepAnimNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_metalParticle_MetaData[] = {
		{ "Category", "FootStepAnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/FootStepAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_metalParticle = { "metalParticle", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootStepAnimNotify, metalParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_metalParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_metalParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_waterParticle_MetaData[] = {
		{ "Category", "FootStepAnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/FootStepAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_waterParticle = { "waterParticle", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootStepAnimNotify, waterParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_waterParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_waterParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_iceParticle_MetaData[] = {
		{ "Category", "FootStepAnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/FootStepAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_iceParticle = { "iceParticle", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootStepAnimNotify, iceParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_iceParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_iceParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_defaultParticle_MetaData[] = {
		{ "Category", "FootStepAnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/FootStepAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_defaultParticle = { "defaultParticle", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootStepAnimNotify, defaultParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_defaultParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_defaultParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_socketName_MetaData[] = {
		{ "Category", "FootStepAnimNotify" },
		{ "ModuleRelativePath", "Public/Character/Animation/Notify/FootStepAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_socketName = { "socketName", nullptr, (EPropertyFlags)0x0020080000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootStepAnimNotify, socketName), METADATA_PARAMS(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_socketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_socketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootStepAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_metalParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_waterParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_iceParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_defaultParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootStepAnimNotify_Statics::NewProp_socketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootStepAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootStepAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootStepAnimNotify_Statics::ClassParams = {
		&UFootStepAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFootStepAnimNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootStepAnimNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFootStepAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootStepAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootStepAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootStepAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootStepAnimNotify, 155564441);
	template<> SECONDPROJECT_API UClass* StaticClass<UFootStepAnimNotify>()
	{
		return UFootStepAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootStepAnimNotify(Z_Construct_UClass_UFootStepAnimNotify, &UFootStepAnimNotify::StaticClass, TEXT("/Script/SecondProject"), TEXT("UFootStepAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootStepAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
