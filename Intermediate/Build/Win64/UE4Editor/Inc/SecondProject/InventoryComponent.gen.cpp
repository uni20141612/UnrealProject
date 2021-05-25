// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Character/Player/Component/InventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature();
	SECONDPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FEquippedItem();
	SECONDPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStoredItem();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics
	{
		struct _Script_SecondProject_eventUnEquip_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::NewProp_statComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::NewProp_statComp = { "statComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SecondProject_eventUnEquip_Parms, statComp), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::NewProp_statComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::NewProp_statComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::NewProp_statComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/Component/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondProject, nullptr, "UnEquip__DelegateSignature", nullptr, nullptr, sizeof(_Script_SecondProject_eventUnEquip_Parms), Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics
	{
		struct _Script_SecondProject_eventEquip_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::NewProp_statComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::NewProp_statComp = { "statComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SecondProject_eventEquip_Parms, statComp), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::NewProp_statComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::NewProp_statComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::NewProp_statComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/Component/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondProject, nullptr, "Equip__DelegateSignature", nullptr, nullptr, sizeof(_Script_SecondProject_eventEquip_Parms), Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FEquippedItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SECONDPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FEquippedItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquippedItem, Z_Construct_UPackage__Script_SecondProject(), TEXT("EquippedItem"), sizeof(FEquippedItem), Get_Z_Construct_UScriptStruct_FEquippedItem_Hash());
	}
	return Singleton;
}
template<> SECONDPROJECT_API UScriptStruct* StaticStruct<FEquippedItem>()
{
	return FEquippedItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEquippedItem(FEquippedItem::StaticStruct, TEXT("/Script/SecondProject"), TEXT("EquippedItem"), false, nullptr, nullptr);
static struct FScriptStruct_SecondProject_StaticRegisterNativesFEquippedItem
{
	FScriptStruct_SecondProject_StaticRegisterNativesFEquippedItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EquippedItem")),new UScriptStruct::TCppStructOps<FEquippedItem>);
	}
} ScriptStruct_SecondProject_StaticRegisterNativesFEquippedItem;
	struct Z_Construct_UScriptStruct_FEquippedItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquippedItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/Component/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquippedItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquippedItem>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquippedItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
		nullptr,
		&NewStructOps,
		"EquippedItem",
		sizeof(FEquippedItem),
		alignof(FEquippedItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquippedItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquippedItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquippedItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEquippedItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EquippedItem"), sizeof(FEquippedItem), Get_Z_Construct_UScriptStruct_FEquippedItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEquippedItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEquippedItem_Hash() { return 3825111078U; }
class UScriptStruct* FStoredItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SECONDPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FStoredItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoredItem, Z_Construct_UPackage__Script_SecondProject(), TEXT("StoredItem"), sizeof(FStoredItem), Get_Z_Construct_UScriptStruct_FStoredItem_Hash());
	}
	return Singleton;
}
template<> SECONDPROJECT_API UScriptStruct* StaticStruct<FStoredItem>()
{
	return FStoredItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoredItem(FStoredItem::StaticStruct, TEXT("/Script/SecondProject"), TEXT("StoredItem"), false, nullptr, nullptr);
static struct FScriptStruct_SecondProject_StaticRegisterNativesFStoredItem
{
	FScriptStruct_SecondProject_StaticRegisterNativesFStoredItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoredItem")),new UScriptStruct::TCppStructOps<FStoredItem>);
	}
} ScriptStruct_SecondProject_StaticRegisterNativesFStoredItem;
	struct Z_Construct_UScriptStruct_FStoredItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoredItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/Component/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoredItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoredItem>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoredItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
		nullptr,
		&NewStructOps,
		"StoredItem",
		sizeof(FStoredItem),
		alignof(FStoredItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoredItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoredItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoredItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoredItem"), sizeof(FStoredItem), Get_Z_Construct_UScriptStruct_FStoredItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoredItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoredItem_Hash() { return 1774723085U; }
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
	}
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/Player/Component/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Character/Player/Component/InventoryComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryComponent, 1858414044);
	template<> SECONDPROJECT_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent(Z_Construct_UClass_UInventoryComponent, &UInventoryComponent::StaticClass, TEXT("/Script/SecondProject"), TEXT("UInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
