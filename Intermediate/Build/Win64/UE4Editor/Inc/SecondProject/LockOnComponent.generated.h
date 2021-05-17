// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_LockOnComponent_generated_h
#error "LockOnComponent.generated.h already included, missing '#pragma once' in LockOnComponent.h"
#endif
#define SECONDPROJECT_LockOnComponent_generated_h

#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_RPC_WRAPPERS
#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULockOnComponent(); \
	friend struct Z_Construct_UClass_ULockOnComponent_Statics; \
public: \
	DECLARE_CLASS(ULockOnComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(ULockOnComponent)


#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULockOnComponent(); \
	friend struct Z_Construct_UClass_ULockOnComponent_Statics; \
public: \
	DECLARE_CLASS(ULockOnComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(ULockOnComponent)


#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULockOnComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULockOnComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockOnComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockOnComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULockOnComponent(ULockOnComponent&&); \
	NO_API ULockOnComponent(const ULockOnComponent&); \
public:


#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULockOnComponent(ULockOnComponent&&); \
	NO_API ULockOnComponent(const ULockOnComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockOnComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockOnComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULockOnComponent)


#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__player() { return STRUCT_OFFSET(ULockOnComponent, player); } \
	FORCEINLINE static uint32 __PPO__LockOnableMonsters() { return STRUCT_OFFSET(ULockOnComponent, LockOnableMonsters); } \
	FORCEINLINE static uint32 __PPO__lockOnTarget() { return STRUCT_OFFSET(ULockOnComponent, lockOnTarget); } \
	FORCEINLINE static uint32 __PPO__controller() { return STRUCT_OFFSET(ULockOnComponent, controller); } \
	FORCEINLINE static uint32 __PPO__curIndex() { return STRUCT_OFFSET(ULockOnComponent, curIndex); } \
	FORCEINLINE static uint32 __PPO__distance() { return STRUCT_OFFSET(ULockOnComponent, distance); } \
	FORCEINLINE static uint32 __PPO__radius() { return STRUCT_OFFSET(ULockOnComponent, radius); }


#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_16_PROLOG
#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_INCLASS \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class ULockOnComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Character_Component_LockOnComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
