// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_MonsterController_generated_h
#error "MonsterController.generated.h already included, missing '#pragma once' in MonsterController.h"
#endif
#define SECONDPROJECT_MonsterController_generated_h

#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_RPC_WRAPPERS
#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterController(); \
	friend struct Z_Construct_UClass_AMonsterController_Statics; \
public: \
	DECLARE_CLASS(AMonsterController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonsterController)


#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterController(); \
	friend struct Z_Construct_UClass_AMonsterController_Statics; \
public: \
	DECLARE_CLASS(AMonsterController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AMonsterController)


#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_STANDARD_CONSTRUCTORS \
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


#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_ENHANCED_CONSTRUCTORS \
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


#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerMonster() { return STRUCT_OFFSET(AMonsterController, OwnerMonster); }


#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_13_PROLOG
#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_INCLASS \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class AMonsterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Character_Monster_Controller_MonsterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
