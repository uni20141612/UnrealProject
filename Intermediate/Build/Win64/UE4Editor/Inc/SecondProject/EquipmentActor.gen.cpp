// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Equipment/EquipmentActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentActor() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_AEquipmentActor_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AEquipmentActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEquipmentActor::execOnBeginOverlapEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapEvent(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AEquipmentActor::StaticRegisterNativesAEquipmentActor()
	{
		UClass* Class = AEquipmentActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapEvent", &AEquipmentActor::execOnBeginOverlapEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics
	{
		struct EquipmentActor_eventOnBeginOverlapEvent_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentActor_eventOnBeginOverlapEvent_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentActor_eventOnBeginOverlapEvent_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Equipment/EquipmentActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipmentActor, nullptr, "OnBeginOverlapEvent", nullptr, nullptr, sizeof(EquipmentActor_eventOnBeginOverlapEvent_Parms), Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEquipmentActor_NoRegister()
	{
		return AEquipmentActor::StaticClass();
	}
	struct Z_Construct_UClass_AEquipmentActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitSound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_hitActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEquipmentActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEquipmentActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEquipmentActor_OnBeginOverlapEvent, "OnBeginOverlapEvent" }, // 1678737185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/Equipment/EquipmentActor.h" },
		{ "ModuleRelativePath", "Public/Character/Equipment/EquipmentActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentActor_Statics::NewProp_skeletalMesh_MetaData[] = {
		{ "Category", "EquipmentActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Equipment/EquipmentActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentActor_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipmentActor, skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_skeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_skeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitParticle_MetaData[] = {
		{ "Category", "EquipmentActor" },
		{ "ModuleRelativePath", "Public/Character/Equipment/EquipmentActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitParticle = { "hitParticle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipmentActor, hitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitSound_MetaData[] = {
		{ "Category", "EquipmentActor" },
		{ "ModuleRelativePath", "Public/Character/Equipment/EquipmentActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitSound = { "hitSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipmentActor, hitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitSound_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitActors_Inner = { "hitActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitActors_MetaData[] = {
		{ "Comment", "//?\xcc\xb9? ?\xd1\xb9? ?\xc7\xb0\xdd\xb4??? ???????? ?????? ?\xe8\xbf\xad?\xd4\xb4\xcf\xb4?.\n" },
		{ "ModuleRelativePath", "Public/Character/Equipment/EquipmentActor.h" },
		{ "ToolTip", "?\xcc\xb9? ?\xd1\xb9? ?\xc7\xb0\xdd\xb4??? ???????? ?????? ?\xe8\xbf\xad?\xd4\xb4\xcf\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitActors = { "hitActors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipmentActor, hitActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEquipmentActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentActor_Statics::NewProp_skeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipmentActor_Statics::NewProp_hitActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEquipmentActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipmentActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEquipmentActor_Statics::ClassParams = {
		&AEquipmentActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEquipmentActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEquipmentActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEquipmentActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEquipmentActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEquipmentActor, 6109314);
	template<> SECONDPROJECT_API UClass* StaticClass<AEquipmentActor>()
	{
		return AEquipmentActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEquipmentActor(Z_Construct_UClass_AEquipmentActor, &AEquipmentActor::StaticClass, TEXT("/Script/SecondProject"), TEXT("AEquipmentActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipmentActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
