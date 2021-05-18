// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_ItemActor_generated_h
#error "ItemActor.generated.h already included, missing '#pragma once' in ItemActor.h"
#endif
#define SECONDPROJECT_ItemActor_generated_h

#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_RPC_WRAPPERS
#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemActor(); \
	friend struct Z_Construct_UClass_AItemActor_Statics; \
public: \
	DECLARE_CLASS(AItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AItemActor)


#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAItemActor(); \
	friend struct Z_Construct_UClass_AItemActor_Statics; \
public: \
	DECLARE_CLASS(AItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AItemActor)


#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemActor(AItemActor&&); \
	NO_API AItemActor(const AItemActor&); \
public:


#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemActor(AItemActor&&); \
	NO_API AItemActor(const AItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemActor)


#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sphereComponent() { return STRUCT_OFFSET(AItemActor, sphereComponent); } \
	FORCEINLINE static uint32 __PPO__particleComponent() { return STRUCT_OFFSET(AItemActor, particleComponent); } \
	FORCEINLINE static uint32 __PPO__widgetComponent() { return STRUCT_OFFSET(AItemActor, widgetComponent); } \
	FORCEINLINE static uint32 __PPO__item_Code() { return STRUCT_OFFSET(AItemActor, item_Code); } \
	FORCEINLINE static uint32 __PPO__item_Count() { return STRUCT_OFFSET(AItemActor, item_Count); } \
	FORCEINLINE static uint32 __PPO__itemTable() { return STRUCT_OFFSET(AItemActor, itemTable); }


#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_12_PROLOG
#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_INCLASS \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Item_ItemActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class AItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Item_ItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
