// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UStatusComponent;
#ifdef SECONDPROJECT_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define SECONDPROJECT_InventoryComponent_generated_h

#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquippedItem_Statics; \
	SECONDPROJECT_API static class UScriptStruct* StaticStruct();


template<> SECONDPROJECT_API UScriptStruct* StaticStruct<struct FEquippedItem>();

#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStoredItem_Statics; \
	SECONDPROJECT_API static class UScriptStruct* StaticStruct();


template<> SECONDPROJECT_API UScriptStruct* StaticStruct<struct FStoredItem>();

#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_74_DELEGATE \
struct _Script_SecondProject_eventAddQuick_Parms \
{ \
	UTexture2D* image; \
	int32 count; \
}; \
static inline void FAddQuick_DelegateWrapper(const FMulticastScriptDelegate& AddQuick, UTexture2D* image, int32 const& count) \
{ \
	_Script_SecondProject_eventAddQuick_Parms Parms; \
	Parms.image=image; \
	Parms.count=count; \
	AddQuick.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_73_DELEGATE \
struct _Script_SecondProject_eventUseQuick_Parms \
{ \
	int32 count; \
}; \
static inline void FUseQuick_DelegateWrapper(const FMulticastScriptDelegate& UseQuick, int32 const& count) \
{ \
	_Script_SecondProject_eventUseQuick_Parms Parms; \
	Parms.count=count; \
	UseQuick.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_71_DELEGATE \
struct _Script_SecondProject_eventUnEquip_Parms \
{ \
	UStatusComponent* statComp; \
}; \
static inline void FUnEquip_DelegateWrapper(const FMulticastScriptDelegate& UnEquip, UStatusComponent* statComp) \
{ \
	_Script_SecondProject_eventUnEquip_Parms Parms; \
	Parms.statComp=statComp; \
	UnEquip.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_70_DELEGATE \
struct _Script_SecondProject_eventEquip_Parms \
{ \
	UStatusComponent* statComp; \
}; \
static inline void FEquip_DelegateWrapper(const FMulticastScriptDelegate& Equip, UStatusComponent* statComp) \
{ \
	_Script_SecondProject_eventEquip_Parms Parms; \
	Parms.statComp=statComp; \
	Equip.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_RPC_WRAPPERS
#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_PRIVATE_PROPERTY_OFFSET
#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_76_PROLOG
#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_INCLASS \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Character_Player_Component_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
