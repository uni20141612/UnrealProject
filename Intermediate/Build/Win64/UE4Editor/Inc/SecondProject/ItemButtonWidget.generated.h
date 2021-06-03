// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_ItemButtonWidget_generated_h
#error "ItemButtonWidget.generated.h already included, missing '#pragma once' in ItemButtonWidget.h"
#endif
#define SECONDPROJECT_ItemButtonWidget_generated_h

#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClickedButtonItem); \
	DECLARE_FUNCTION(execOnHoveredButtonItem);


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClickedButtonItem); \
	DECLARE_FUNCTION(execOnHoveredButtonItem);


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemButtonWidget(); \
	friend struct Z_Construct_UClass_UItemButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UItemButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UItemButtonWidget)


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUItemButtonWidget(); \
	friend struct Z_Construct_UClass_UItemButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UItemButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UItemButtonWidget)


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemButtonWidget(UItemButtonWidget&&); \
	NO_API UItemButtonWidget(const UItemButtonWidget&); \
public:


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemButtonWidget(UItemButtonWidget&&); \
	NO_API UItemButtonWidget(const UItemButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemButtonWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemButtonWidget)


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_Item() { return STRUCT_OFFSET(UItemButtonWidget, Button_Item); } \
	FORCEINLINE static uint32 __PPO__TextBlock_ItemName() { return STRUCT_OFFSET(UItemButtonWidget, TextBlock_ItemName); } \
	FORCEINLINE static uint32 __PPO__TextBlock_ItemCount() { return STRUCT_OFFSET(UItemButtonWidget, TextBlock_ItemCount); } \
	FORCEINLINE static uint32 __PPO__TextBlock_ItemDescription() { return STRUCT_OFFSET(UItemButtonWidget, TextBlock_ItemDescription); } \
	FORCEINLINE static uint32 __PPO__Image_ItemImage() { return STRUCT_OFFSET(UItemButtonWidget, Image_ItemImage); } \
	FORCEINLINE static uint32 __PPO__UMG_ItemList() { return STRUCT_OFFSET(UItemButtonWidget, UMG_ItemList); } \
	FORCEINLINE static uint32 __PPO__toolTipWidgetClass() { return STRUCT_OFFSET(UItemButtonWidget, toolTipWidgetClass); } \
	FORCEINLINE static uint32 __PPO__myToolTipWidget() { return STRUCT_OFFSET(UItemButtonWidget, myToolTipWidget); }


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_14_PROLOG
#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_INCLASS \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UItemButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Widget_ItemButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
