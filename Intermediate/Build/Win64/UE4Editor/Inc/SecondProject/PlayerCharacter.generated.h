// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SECONDPROJECT_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define SECONDPROJECT_PlayerCharacter_generated_h

#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlapEvent); \
	DECLARE_FUNCTION(execOnBeginOverlapEvent);


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlapEvent); \
	DECLARE_FUNCTION(execOnBeginOverlapEvent);


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APlayerCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__lockOnComponent() { return STRUCT_OFFSET(APlayerCharacter, lockOnComponent); } \
	FORCEINLINE static uint32 __PPO__moveForward() { return STRUCT_OFFSET(APlayerCharacter, moveForward); } \
	FORCEINLINE static uint32 __PPO__moveRight() { return STRUCT_OFFSET(APlayerCharacter, moveRight); } \
	FORCEINLINE static uint32 __PPO__spawndWeapon() { return STRUCT_OFFSET(APlayerCharacter, spawndWeapon); } \
	FORCEINLINE static uint32 __PPO__spawndShield() { return STRUCT_OFFSET(APlayerCharacter, spawndShield); } \
	FORCEINLINE static uint32 __PPO__damageWidgetComponentClass() { return STRUCT_OFFSET(APlayerCharacter, damageWidgetComponentClass); } \
	FORCEINLINE static uint32 __PPO__inventoryComponent() { return STRUCT_OFFSET(APlayerCharacter, inventoryComponent); }


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_13_PROLOG
#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_INCLASS \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Character_Player_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
