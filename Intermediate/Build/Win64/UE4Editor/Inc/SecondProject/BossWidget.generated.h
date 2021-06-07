// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_BossWidget_generated_h
#error "BossWidget.generated.h already included, missing '#pragma once' in BossWidget.h"
#endif
#define SECONDPROJECT_BossWidget_generated_h

#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_SPARSE_DATA
#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_RPC_WRAPPERS
#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBossWidget(); \
	friend struct Z_Construct_UClass_UBossWidget_Statics; \
public: \
	DECLARE_CLASS(UBossWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UBossWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBossWidget(); \
	friend struct Z_Construct_UClass_UBossWidget_Statics; \
public: \
	DECLARE_CLASS(UBossWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondProject"), NO_API) \
	DECLARE_SERIALIZER(UBossWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBossWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBossWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBossWidget(UBossWidget&&); \
	NO_API UBossWidget(const UBossWidget&); \
public:


#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBossWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBossWidget(UBossWidget&&); \
	NO_API UBossWidget(const UBossWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBossWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossWidget)


#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextBlock_BossName() { return STRUCT_OFFSET(UBossWidget, TextBlock_BossName); } \
	FORCEINLINE static uint32 __PPO__BossHP() { return STRUCT_OFFSET(UBossWidget, BossHP); } \
	FORCEINLINE static uint32 __PPO__monster() { return STRUCT_OFFSET(UBossWidget, monster); }


#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_13_PROLOG
#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_RPC_WRAPPERS \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_INCLASS \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_SPARSE_DATA \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_INCLASS_NO_PURE_DECLS \
	UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDPROJECT_API UClass* StaticClass<class UBossWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Widget_BossWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
