// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Component/LockOnComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnComponent() {}
// Cross Module References
	SECONDPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonster_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ACustomController_NoRegister();
// End Cross Module References
	void ULockOnComponent::StaticRegisterNativesULockOnComponent()
	{
	}
	UClass* Z_Construct_UClass_ULockOnComponent_NoRegister()
	{
		return ULockOnComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULockOnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockOnableMonsters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockOnableMonsters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LockOnableMonsters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lockOnTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lockOnTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_curIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n* ?\xc3\xb7??\xcc\xbe? \xc4\xb3?????? \xc4\xab?\xde\xb6??? ??????\n* \xc4\xab?\xde\xb6??\xce\xba??? n??\xc5\xad?? ?\xc5\xb8????? \xc6\xae???\xcc\xbd??? ??(???? \xc6\xae???\xcc\xbd?)\n* \xc6\xae???\xcc\xbd??? ???? ?\xc9\xb8???(??????) \xc4\xab?\xde\xb6???, \xc4\xb3???\xcd\xb0? ?????\xcd\xb8? ?\xd9\xb6\xf3\xba\xb8\xb0? ????.\n*/" },
		{ "IncludePath", "Character/Component/LockOnComponent.h" },
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
		{ "ToolTip", "* ?\xc3\xb7??\xcc\xbe? \xc4\xb3?????? \xc4\xab?\xde\xb6??? ??????\n* \xc4\xab?\xde\xb6??\xce\xba??? n??\xc5\xad?? ?\xc5\xb8????? \xc6\xae???\xcc\xbd??? ??(???? \xc6\xae???\xcc\xbd?)\n* \xc6\xae???\xcc\xbd??? ???? ?\xc9\xb8???(??????) \xc4\xab?\xde\xb6???, \xc4\xb3???\xcd\xb0? ?????\xcd\xb8? ?\xd9\xb6\xf3\xba\xb8\xb0? ????." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockOnComponent, player), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_LockOnableMonsters_Inner = { "LockOnableMonsters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMonster_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_LockOnableMonsters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_LockOnableMonsters = { "LockOnableMonsters", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockOnComponent, LockOnableMonsters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_LockOnableMonsters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_LockOnableMonsters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_lockOnTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_lockOnTarget = { "lockOnTarget", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockOnComponent, lockOnTarget), Z_Construct_UClass_AMonster_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_lockOnTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_lockOnTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockOnComponent, controller), Z_Construct_UClass_ACustomController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_curIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_curIndex = { "curIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockOnComponent, curIndex), METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_curIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_curIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "LockOnComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockOnComponent, distance), METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "LockOnComponent" },
		{ "ModuleRelativePath", "Public/Character/Component/LockOnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockOnComponent, radius), METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULockOnComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_LockOnableMonsters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_LockOnableMonsters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_lockOnTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_curIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULockOnComponent_Statics::ClassParams = {
		&ULockOnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULockOnComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULockOnComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULockOnComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULockOnComponent, 562768830);
	template<> SECONDPROJECT_API UClass* StaticClass<ULockOnComponent>()
	{
		return ULockOnComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULockOnComponent(Z_Construct_UClass_ULockOnComponent, &ULockOnComponent::StaticClass, TEXT("/Script/SecondProject"), TEXT("ULockOnComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
