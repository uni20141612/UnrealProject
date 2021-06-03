// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define SECONDPROJECT_Weapon_generated_h

#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_RPC_WRAPPERS
#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AEquipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AEquipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_12_PROLOG
#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_INCLASS \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Item_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Item_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
