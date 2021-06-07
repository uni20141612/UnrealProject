// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAIMoveState : uint8;
#ifdef SECONDPROJECT_Monster_generated_h
#error "Monster.generated.h already included, missing '#pragma once' in Monster.h"
#endif
#define SECONDPROJECT_Monster_generated_h

#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDropTable_Statics; \
	SECONDPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SECONDPROJECT_API UScriptStruct* StaticStruct<struct FDropTable>();

#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveBossWidget); \
	DECLARE_FUNCTION(execOnChangeMoveStateEvent); \
	DECLARE_FUNCTION(execDropItem);


#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveBossWidget); \
	DECLARE_FUNCTION(execOnChangeMoveStateEvent); \
	DECLARE_FUNCTION(execDropItem);


#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_INCLASS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_STANDARD_CONSTRUCTORS \
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


#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster)


#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_44_PROLOG
#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_INCLASS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class AMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Character_Monster_h


#define FOREACH_ENUM_EAIMOVESTATE(op) \
	op(EAIMoveState::WALK) \
	op(EAIMoveState::RUN) \
	op(EAIMoveState::AIMove_MAX) 

enum class EAIMoveState : uint8;
template<> SECONDPROJECT_API UEnum* StaticEnum<EAIMoveState>();

#define FOREACH_ENUM_EAICOMBATSTATE(op) \
	op(EAICombatState::APPROCH) \
	op(EAICombatState::ATTACK) \
	op(EAICombatState::BEWHARE) \
	op(EAICombatState::AICOMBAT_MAX) 

enum class EAICombatState : uint8;
template<> SECONDPROJECT_API UEnum* StaticEnum<EAICombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
