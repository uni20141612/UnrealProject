// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_StatusComponent_generated_h
#error "StatusComponent.generated.h already included, missing '#pragma once' in StatusComponent.h"
#endif
#define SECONDPROJECT_StatusComponent_generated_h

#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_RPC_WRAPPERS
#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusComponent(); \
	friend struct Z_Construct_UClass_UStatusComponent_Statics; \
public: \
	DECLARE_CLASS(UStatusComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UStatusComponent)


#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStatusComponent(); \
	friend struct Z_Construct_UClass_UStatusComponent_Statics; \
public: \
	DECLARE_CLASS(UStatusComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UStatusComponent)


#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusComponent(UStatusComponent&&); \
	NO_API UStatusComponent(const UStatusComponent&); \
public:


#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatusComponent(UStatusComponent&&); \
	NO_API UStatusComponent(const UStatusComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatusComponent)


#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(UStatusComponent, HP); } \
	FORCEINLINE static uint32 __PPO__MaxHP() { return STRUCT_OFFSET(UStatusComponent, MaxHP); } \
	FORCEINLINE static uint32 __PPO__SP() { return STRUCT_OFFSET(UStatusComponent, SP); } \
	FORCEINLINE static uint32 __PPO__MaxSP() { return STRUCT_OFFSET(UStatusComponent, MaxSP); } \
	FORCEINLINE static uint32 __PPO__AttackSpeed() { return STRUCT_OFFSET(UStatusComponent, AttackSpeed); }


#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_10_PROLOG
#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_INCLASS \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UStatusComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Character_Component_StatusComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
