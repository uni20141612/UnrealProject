// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_CustomController_generated_h
#error "CustomController.generated.h already included, missing '#pragma once' in CustomController.h"
#endif
#define SECONDPROJECT_CustomController_generated_h

#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_SPARSE_DATA
#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_RPC_WRAPPERS
#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomController(); \
	friend struct Z_Construct_UClass_ACustomController_Statics; \
public: \
	DECLARE_CLASS(ACustomController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(ACustomController)


#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACustomController(); \
	friend struct Z_Construct_UClass_ACustomController_Statics; \
public: \
	DECLARE_CLASS(ACustomController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(ACustomController)


#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomController(ACustomController&&); \
	NO_API ACustomController(const ACustomController&); \
public:


#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomController(ACustomController&&); \
	NO_API ACustomController(const ACustomController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomController)


#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mainWidgetClass() { return STRUCT_OFFSET(ACustomController, mainWidgetClass); } \
	FORCEINLINE static uint32 __PPO__mainWidget() { return STRUCT_OFFSET(ACustomController, mainWidget); } \
	FORCEINLINE static uint32 __PPO__lockOnWidgetClass() { return STRUCT_OFFSET(ACustomController, lockOnWidgetClass); } \
	FORCEINLINE static uint32 __PPO__lockOnWidget() { return STRUCT_OFFSET(ACustomController, lockOnWidget); } \
	FORCEINLINE static uint32 __PPO__inventoryWidgetClass() { return STRUCT_OFFSET(ACustomController, inventoryWidgetClass); } \
	FORCEINLINE static uint32 __PPO__inventoryWidget() { return STRUCT_OFFSET(ACustomController, inventoryWidget); }


#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_13_PROLOG
#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_RPC_WRAPPERS \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_INCLASS \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_PRIVATE_PROPERTY_OFFSET \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_SPARSE_DATA \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_INCLASS_NO_PURE_DECLS \
	SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class ACustomController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SecondProject_Source_SecondProject_Public_Character_Player_Controller_CustomController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
