// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAIMoveState : uint8;
#ifdef SECONDPROJECT_MonsterController_generated_h
#error "MonsterController.generated.h already included, missing '#pragma once' in MonsterController.h"
#endif
#define SECONDPROJECT_MonsterController_generated_h

#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_11_DELEGATE \
struct _Script_SecondProject_eventChangeMoveState_Parms \
{ \
	EAIMoveState newState; \
}; \
static inline void FChangeMoveState_DelegateWrapper(const FMulticastScriptDelegate& ChangeMoveState, EAIMoveState newState) \
{ \
	_Script_SecondProject_eventChangeMoveState_Parms Parms; \
	Parms.newState=newState; \
	ChangeMoveState.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopBehaviorTree);


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopBehaviorTree);


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterController(); \
	friend struct Z_Construct_UClass_AMonsterController_Statics; \
public: \
	DECLARE_CLASS(AMonsterController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonsterController)


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterController(); \
	friend struct Z_Construct_UClass_AMonsterController_Statics; \
public: \
	DECLARE_CLASS(AMonsterController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonsterController)


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterController(AMonsterController&&); \
	NO_API AMonsterController(const AMonsterController&); \
public:


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterController(AMonsterController&&); \
	NO_API AMonsterController(const AMonsterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterController)


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerMonster() { return STRUCT_OFFSET(AMonsterController, OwnerMonster); }


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_PROLOG
#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_INCLASS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class AMonsterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
