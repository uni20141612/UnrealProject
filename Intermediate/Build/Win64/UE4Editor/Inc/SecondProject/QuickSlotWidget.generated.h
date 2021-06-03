// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef SECONDPROJECT_QuickSlotWidget_generated_h
#error "QuickSlotWidget.generated.h already included, missing '#pragma once' in QuickSlotWidget.h"
#endif
#define SECONDPROJECT_QuickSlotWidget_generated_h

#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUseQuickSlotEvent); \
	DECLARE_FUNCTION(execChangeQuickSlotEvent);


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUseQuickSlotEvent); \
	DECLARE_FUNCTION(execChangeQuickSlotEvent);


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuickSlotWidget(); \
	friend struct Z_Construct_UClass_UQuickSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UQuickSlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UQuickSlotWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUQuickSlotWidget(); \
	friend struct Z_Construct_UClass_UQuickSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UQuickSlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UQuickSlotWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickSlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuickSlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickSlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuickSlotWidget(UQuickSlotWidget&&); \
	NO_API UQuickSlotWidget(const UQuickSlotWidget&); \
public:


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickSlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuickSlotWidget(UQuickSlotWidget&&); \
	NO_API UQuickSlotWidget(const UQuickSlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickSlotWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuickSlotWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Image_Item() { return STRUCT_OFFSET(UQuickSlotWidget, Image_Item); } \
	FORCEINLINE static uint32 __PPO__TextBlock_ItemCount() { return STRUCT_OFFSET(UQuickSlotWidget, TextBlock_ItemCount); }


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_13_PROLOG
#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_INCLASS \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UQuickSlotWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Widget_QuickSlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
