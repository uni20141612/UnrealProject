// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SECONDPROJECT_EquipmentActor_generated_h
#error "EquipmentActor.generated.h already included, missing '#pragma once' in EquipmentActor.h"
#endif
#define SECONDPROJECT_EquipmentActor_generated_h

#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlapEvent);


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlapEvent);


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEquipmentActor(); \
	friend struct Z_Construct_UClass_AEquipmentActor_Statics; \
public: \
	DECLARE_CLASS(AEquipmentActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AEquipmentActor)


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEquipmentActor(); \
	friend struct Z_Construct_UClass_AEquipmentActor_Statics; \
public: \
	DECLARE_CLASS(AEquipmentActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AEquipmentActor)


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEquipmentActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEquipmentActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipmentActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipmentActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipmentActor(AEquipmentActor&&); \
	NO_API AEquipmentActor(const AEquipmentActor&); \
public:


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipmentActor(AEquipmentActor&&); \
	NO_API AEquipmentActor(const AEquipmentActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipmentActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipmentActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEquipmentActor)


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__skeletalMesh() { return STRUCT_OFFSET(AEquipmentActor, skeletalMesh); } \
	FORCEINLINE static uint32 __PPO__hitParticle() { return STRUCT_OFFSET(AEquipmentActor, hitParticle); } \
	FORCEINLINE static uint32 __PPO__hitSound() { return STRUCT_OFFSET(AEquipmentActor, hitSound); } \
	FORCEINLINE static uint32 __PPO__hitActors() { return STRUCT_OFFSET(AEquipmentActor, hitActors); }


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_10_PROLOG
#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_INCLASS \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class AEquipmentActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Character_Equipment_EquipmentActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
