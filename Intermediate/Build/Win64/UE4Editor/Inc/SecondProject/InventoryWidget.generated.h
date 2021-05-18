// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;
#ifdef SECONDPROJECT_InventoryWidget_generated_h
#error "InventoryWidget.generated.h already included, missing '#pragma once' in InventoryWidget.h"
#endif
#define SECONDPROJECT_InventoryWidget_generated_h

#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnVisibilityChange);


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVisibilityChange);


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public:


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_Inventory() { return STRUCT_OFFSET(UInventoryWidget, Button_Inventory); } \
	FORCEINLINE static uint32 __PPO__Button_Equipment() { return STRUCT_OFFSET(UInventoryWidget, Button_Equipment); } \
	FORCEINLINE static uint32 __PPO__WidgetSwitcher_Switcher() { return STRUCT_OFFSET(UInventoryWidget, WidgetSwitcher_Switcher); } \
	FORCEINLINE static uint32 __PPO__UMG_InventoryList() { return STRUCT_OFFSET(UInventoryWidget, UMG_InventoryList); } \
	FORCEINLINE static uint32 __PPO__UMG_ItemInformation() { return STRUCT_OFFSET(UInventoryWidget, UMG_ItemInformation); } \
	FORCEINLINE static uint32 __PPO__UMG_PlayerInformation() { return STRUCT_OFFSET(UInventoryWidget, UMG_PlayerInformation); }


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_13_PROLOG
#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_INCLASS \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Widget_InventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
