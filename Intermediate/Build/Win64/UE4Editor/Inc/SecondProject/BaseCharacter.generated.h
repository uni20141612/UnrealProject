// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define SECONDPROJECT_BaseCharacter_generated_h

#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_10_DELEGATE \
static inline void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath) \
{ \
	OnDeath.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRagdoll); \
	DECLARE_FUNCTION(execSetSpectator);


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRagdoll); \
	DECLARE_FUNCTION(execSetSpectator);


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__statusComponent() { return STRUCT_OFFSET(ABaseCharacter, statusComponent); } \
	FORCEINLINE static uint32 __PPO__widgetComponent() { return STRUCT_OFFSET(ABaseCharacter, widgetComponent); }


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_12_PROLOG
#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_INCLASS \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Character_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
