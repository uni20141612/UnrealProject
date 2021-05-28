// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_EquipmentButtonWidget_generated_h
#error "EquipmentButtonWidget.generated.h already included, missing '#pragma once' in EquipmentButtonWidget.h"
#endif
#define SECONDPROJECT_EquipmentButtonWidget_generated_h

#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_RPC_WRAPPERS
#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentButtonWidget(); \
	friend struct Z_Construct_UClass_UEquipmentButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UEquipmentButtonWidget, UDragableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentButtonWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUEquipmentButtonWidget(); \
	friend struct Z_Construct_UClass_UEquipmentButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UEquipmentButtonWidget, UDragableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentButtonWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentButtonWidget(UEquipmentButtonWidget&&); \
	NO_API UEquipmentButtonWidget(const UEquipmentButtonWidget&); \
public:


#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentButtonWidget(UEquipmentButtonWidget&&); \
	NO_API UEquipmentButtonWidget(const UEquipmentButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentButtonWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentButtonWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Image_Item() { return STRUCT_OFFSET(UEquipmentButtonWidget, Image_Item); } \
	FORCEINLINE static uint32 __PPO__TextBlock_ItemCount() { return STRUCT_OFFSET(UEquipmentButtonWidget, TextBlock_ItemCount); } \
	FORCEINLINE static uint32 __PPO__quickListBox() { return STRUCT_OFFSET(UEquipmentButtonWidget, quickListBox); } \
	FORCEINLINE static uint32 __PPO__buttonType() { return STRUCT_OFFSET(UEquipmentButtonWidget, buttonType); } \
	FORCEINLINE static uint32 __PPO__emptyTexture() { return STRUCT_OFFSET(UEquipmentButtonWidget, emptyTexture); }


#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_27_PROLOG
#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_INCLASS \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UEquipmentButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Widget_EquipmentButtonWidget_h


#define FOREACH_ENUM_EEQUIPMENTBUTTONTYPE(op) \
	op(EEquipmentButtonType::Weapon) \
	op(EEquipmentButtonType::Shield) \
	op(EEquipmentButtonType::Helmet) \
	op(EEquipmentButtonType::Gloves) \
	op(EEquipmentButtonType::Chest) \
	op(EEquipmentButtonType::Legs) \
	op(EEquipmentButtonType::Boots) \
	op(EEquipmentButtonType::Consume) 

enum class EEquipmentButtonType : uint8;
template<> SECONDPROJECT_API UEnum* StaticEnum<EEquipmentButtonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
