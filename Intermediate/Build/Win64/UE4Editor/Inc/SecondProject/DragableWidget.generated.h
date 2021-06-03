// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_DragableWidget_generated_h
#error "DragableWidget.generated.h already included, missing '#pragma once' in DragableWidget.h"
#endif
#define SECONDPROJECT_DragableWidget_generated_h

#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_RPC_WRAPPERS
#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDragableWidget(); \
	friend struct Z_Construct_UClass_UDragableWidget_Statics; \
public: \
	DECLARE_CLASS(UDragableWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UDragableWidget)


#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDragableWidget(); \
	friend struct Z_Construct_UClass_UDragableWidget_Statics; \
public: \
	DECLARE_CLASS(UDragableWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UDragableWidget)


#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDragableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragableWidget(UDragableWidget&&); \
	NO_API UDragableWidget(const UDragableWidget&); \
public:


#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDragableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDragableWidget(UDragableWidget&&); \
	NO_API UDragableWidget(const UDragableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDragableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragableWidget)


#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__dragShadowWidgetClass() { return STRUCT_OFFSET(UDragableWidget, dragShadowWidgetClass); } \
	FORCEINLINE static uint32 __PPO__dragShadowWidget() { return STRUCT_OFFSET(UDragableWidget, dragShadowWidget); } \
	FORCEINLINE static uint32 __PPO__widgetDragDropOperClass() { return STRUCT_OFFSET(UDragableWidget, widgetDragDropOperClass); } \
	FORCEINLINE static uint32 __PPO__dragOffset() { return STRUCT_OFFSET(UDragableWidget, dragOffset); }


#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_13_PROLOG
#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_INCLASS \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UDragableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Widget_DragableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
