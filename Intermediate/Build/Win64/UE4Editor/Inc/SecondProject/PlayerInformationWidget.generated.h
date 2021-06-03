// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStatusComponent;
#ifdef SECONDPROJECT_PlayerInformationWidget_generated_h
#error "PlayerInformationWidget.generated.h already included, missing '#pragma once' in PlayerInformationWidget.h"
#endif
#define SECONDPROJECT_PlayerInformationWidget_generated_h

#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPlayerInformation);


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlayerInformation);


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInformationWidget(); \
	friend struct Z_Construct_UClass_UPlayerInformationWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerInformationWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInformationWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInformationWidget(); \
	friend struct Z_Construct_UClass_UPlayerInformationWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerInformationWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInformationWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInformationWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInformationWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInformationWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInformationWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInformationWidget(UPlayerInformationWidget&&); \
	NO_API UPlayerInformationWidget(const UPlayerInformationWidget&); \
public:


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInformationWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInformationWidget(UPlayerInformationWidget&&); \
	NO_API UPlayerInformationWidget(const UPlayerInformationWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInformationWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInformationWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInformationWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextBlock_CurrentHP() { return STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_CurrentHP); } \
	FORCEINLINE static uint32 __PPO__TextBlock_CurrentSP() { return STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_CurrentSP); } \
	FORCEINLINE static uint32 __PPO__TextBlock_Dam() { return STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_Dam); } \
	FORCEINLINE static uint32 __PPO__TextBlock_Def() { return STRUCT_OFFSET(UPlayerInformationWidget, TextBlock_Def); }


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_13_PROLOG
#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_INCLASS \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UPlayerInformationWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Widget_PlayerInformationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
