// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Monster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster() {}
// Cross Module References
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EAIMoveState();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EAICombatState();
	SECONDPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDropTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonster_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_AMonster();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	static UEnum* EAIMoveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SecondProject_EAIMoveState, Z_Construct_UPackage__Script_SecondProject(), TEXT("EAIMoveState"));
		}
		return Singleton;
	}
	template<> SECONDPROJECT_API UEnum* StaticEnum<EAIMoveState>()
	{
		return EAIMoveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIMoveState(EAIMoveState_StaticEnum, TEXT("/Script/SecondProject"), TEXT("EAIMoveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SecondProject_EAIMoveState_Hash() { return 65128999U; }
	UEnum* Z_Construct_UEnum_SecondProject_EAIMoveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIMoveState"), 0, Get_Z_Construct_UEnum_SecondProject_EAIMoveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIMoveState::WALK", (int64)EAIMoveState::WALK },
				{ "EAIMoveState::RUN", (int64)EAIMoveState::RUN },
				{ "EAIMoveState::AIMove_MAX", (int64)EAIMoveState::AIMove_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AIMove_MAX.Name", "EAIMoveState::AIMove_MAX" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Character/Monster.h" },
				{ "RUN.Name", "EAIMoveState::RUN" },
				{ "WALK.Name", "EAIMoveState::WALK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SecondProject,
				nullptr,
				"EAIMoveState",
				"EAIMoveState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAICombatState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SecondProject_EAICombatState, Z_Construct_UPackage__Script_SecondProject(), TEXT("EAICombatState"));
		}
		return Singleton;
	}
	template<> SECONDPROJECT_API UEnum* StaticEnum<EAICombatState>()
	{
		return EAICombatState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAICombatState(EAICombatState_StaticEnum, TEXT("/Script/SecondProject"), TEXT("EAICombatState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SecondProject_EAICombatState_Hash() { return 1759450675U; }
	UEnum* Z_Construct_UEnum_SecondProject_EAICombatState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAICombatState"), 0, Get_Z_Construct_UEnum_SecondProject_EAICombatState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAICombatState::APPROCH", (int64)EAICombatState::APPROCH },
				{ "EAICombatState::ATTACK", (int64)EAICombatState::ATTACK },
				{ "EAICombatState::BEWHARE", (int64)EAICombatState::BEWHARE },
				{ "EAICombatState::AICOMBAT_MAX", (int64)EAICombatState::AICOMBAT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AICOMBAT_MAX.Name", "EAICombatState::AICOMBAT_MAX" },
				{ "APPROCH.Name", "EAICombatState::APPROCH" },
				{ "ATTACK.Name", "EAICombatState::ATTACK" },
				{ "BEWHARE.Name", "EAICombatState::BEWHARE" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Character/Monster.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SecondProject,
				nullptr,
				"EAICombatState",
				"EAICombatState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FDropTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDropTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FDropTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SECONDPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FDropTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDropTable, Z_Construct_UPackage__Script_SecondProject(), TEXT("DropTable"), sizeof(FDropTable), Get_Z_Construct_UScriptStruct_FDropTable_Hash());
	}
	return Singleton;
}
template<> SECONDPROJECT_API UScriptStruct* StaticStruct<FDropTable>()
{
	return FDropTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDropTable(FDropTable::StaticStruct, TEXT("/Script/SecondProject"), TEXT("DropTable"), false, nullptr, nullptr);
static struct FScriptStruct_SecondProject_StaticRegisterNativesFDropTable
{
	FScriptStruct_SecondProject_StaticRegisterNativesFDropTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DropTable")),new UScriptStruct::TCppStructOps<FDropTable>);
	}
} ScriptStruct_SecondProject_StaticRegisterNativesFDropTable;
	struct Z_Construct_UScriptStruct_FDropTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDropTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDropTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_item_MetaData[] = {
		{ "Category", "DropTable" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDropTable, item), Z_Construct_UClass_AItemActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_percent_MetaData[] = {
		{ "Category", "DropTable" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDropTable, percent), METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_percent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDropTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropTable_Statics::NewProp_percent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDropTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DropTable",
		sizeof(FDropTable),
		alignof(FDropTable),
		Z_Construct_UScriptStruct_FDropTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDropTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDropTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DropTable"), sizeof(FDropTable), Get_Z_Construct_UScriptStruct_FDropTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDropTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDropTable_Hash() { return 3363013428U; }
	DEFINE_FUNCTION(AMonster::execRemoveBossWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBossWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster::execOnChangeMoveStateEvent)
	{
		P_GET_ENUM(EAIMoveState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeMoveStateEvent(EAIMoveState(Z_Param_newState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster::execDropItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem();
		P_NATIVE_END;
	}
	void AMonster::StaticRegisterNativesAMonster()
	{
		UClass* Class = AMonster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItem", &AMonster::execDropItem },
			{ "OnChangeMoveStateEvent", &AMonster::execOnChangeMoveStateEvent },
			{ "RemoveBossWidget", &AMonster::execRemoveBossWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonster_DropItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_DropItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "DropItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics
	{
		struct Monster_eventOnChangeMoveStateEvent_Parms
		{
			EAIMoveState newState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Monster_eventOnChangeMoveStateEvent_Parms, newState), Z_Construct_UEnum_SecondProject_EAIMoveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "OnChangeMoveStateEvent", nullptr, nullptr, sizeof(Monster_eventOnChangeMoveStateEvent_Parms), Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_RemoveBossWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_RemoveBossWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_RemoveBossWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster, nullptr, "RemoveBossWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_RemoveBossWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_RemoveBossWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_RemoveBossWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_RemoveBossWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonster_NoRegister()
	{
		return AMonster::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolLocation_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_patrolLocation_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolLocation_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_patrolLocation_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dropTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dropTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AITree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AITree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_monster_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_monster_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBoss_MetaData[];
#endif
		static void NewProp_bBoss_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoss;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonster_DropItem, "DropItem" }, // 3780342589
		{ &Z_Construct_UFunction_AMonster_OnChangeMoveStateEvent, "OnChangeMoveStateEvent" }, // 68740046
		{ &Z_Construct_UFunction_AMonster_RemoveBossWidget, "RemoveBossWidget" }, // 1247927199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Monster.h" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_A_MetaData[] = {
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_A = { "patrolLocation_A", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, patrolLocation_A), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_B_MetaData[] = {
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_B = { "patrolLocation_B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, patrolLocation_B), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_dropTable_MetaData[] = {
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_dropTable = { "dropTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, dropTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_dropTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_dropTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_AITree_MetaData[] = {
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_AITree = { "AITree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, AITree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_AITree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_AITree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_monster_Name_MetaData[] = {
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_monster_Name = { "monster_Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster, monster_Name), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_monster_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_monster_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_bBoss_MetaData[] = {
		{ "Category", "Monster" },
		{ "ModuleRelativePath", "Public/Character/Monster.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Statics::NewProp_bBoss_SetBit(void* Obj)
	{
		((AMonster*)Obj)->bBoss = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_bBoss = { "bBoss", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster), &Z_Construct_UClass_AMonster_Statics::NewProp_bBoss_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_bBoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_bBoss_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_patrolLocation_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_dropTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_AITree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_monster_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_bBoss,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_Statics::ClassParams = {
		&AMonster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMonster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster, 1583686689);
	template<> SECONDPROJECT_API UClass* StaticClass<AMonster>()
	{
		return AMonster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster(Z_Construct_UClass_AMonster, &AMonster::StaticClass, TEXT("/Script/SecondProject"), TEXT("AMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
