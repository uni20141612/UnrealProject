// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_Monster_generated_h
#error "Monster.generated.h already included, missing '#pragma once' in Monster.h"
#endif
#define SECONDPROJECT_Monster_generated_h

#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_RPC_WRAPPERS
#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public:


#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster)


#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_PRIVATE_PROPERTY_OFFSET
#define SecondProject_Source_SecondProject_Public_Character_Monster_h_23_PROLOG
#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_INCLASS \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Character_Monster_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Monster_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class AMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Character_Monster_h


#define FOREACH_ENUM_EAICOMBATSTATE(op) \
	op(EAICombatState::APPROCH) \
	op(EAICombatState::ATTACK) \
	op(EAICombatState::BEWHARE) \
	op(EAICombatState::AICOMBAT_MAX) 

enum class EAICombatState : uint8;
template<> SECONDPROJECT_API UEnum* StaticEnum<EAICombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
