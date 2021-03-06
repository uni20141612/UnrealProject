// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_ItemMenuWidget_generated_h
#error "ItemMenuWidget.generated.h already included, missing '#pragma once' in ItemMenuWidget.h"
#endif
#define SECONDPROJECT_ItemMenuWidget_generated_h

#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClickedButtonCancel); \
	DECLARE_FUNCTION(execOnClickedButtonRemove); \
	DECLARE_FUNCTION(execOnClickedButtonDrop); \
	DECLARE_FUNCTION(execOnClickedButtonUse);


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClickedButtonCancel); \
	DECLARE_FUNCTION(execOnClickedButtonRemove); \
	DECLARE_FUNCTION(execOnClickedButtonDrop); \
	DECLARE_FUNCTION(execOnClickedButtonUse);


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemMenuWidget(); \
	friend struct Z_Construct_UClass_UItemMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UItemMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UItemMenuWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUItemMenuWidget(); \
	friend struct Z_Construct_UClass_UItemMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UItemMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UItemMenuWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemMenuWidget(UItemMenuWidget&&); \
	NO_API UItemMenuWidget(const UItemMenuWidget&); \
public:


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemMenuWidget(UItemMenuWidget&&); \
	NO_API UItemMenuWidget(const UItemMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemMenuWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_Use() { return STRUCT_OFFSET(UItemMenuWidget, Button_Use); } \
	FORCEINLINE static uint32 __PPO__Button_Drop() { return STRUCT_OFFSET(UItemMenuWidget, Button_Drop); } \
	FORCEINLINE static uint32 __PPO__Button_Remove() { return STRUCT_OFFSET(UItemMenuWidget, Button_Remove); } \
	FORCEINLINE static uint32 __PPO__Button_Cancel() { return STRUCT_OFFSET(UItemMenuWidget, Button_Cancel); }


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_13_PROLOG
#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_INCLASS \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UItemMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Widget_ItemMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
