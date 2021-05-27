// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDPROJECT_ItemTypes_generated_h
#error "ItemTypes.generated.h already included, missing '#pragma once' in ItemTypes.h"
#endif
#define SECONDPROJECT_ItemTypes_generated_h

#define UnrealProject_Source_SecondProject_Public_Item_ItemTypes_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponInformation_Statics; \
	SECONDPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FEquipmentInformation Super;


template<> SECONDPROJECT_API UScriptStruct* StaticStruct<struct FWeaponInformation>();

#define UnrealProject_Source_SecondProject_Public_Item_ItemTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPotionInformation_Statics; \
	SECONDPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FItemInformation Super;


template<> SECONDPROJECT_API UScriptStruct* StaticStruct<struct FPotionInformation>();

#define UnrealProject_Source_SecondProject_Public_Item_ItemTypes_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentInformation_Statics; \
	SECONDPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FItemInformation Super;


template<> SECONDPROJECT_API UScriptStruct* StaticStruct<struct FEquipmentInformation>();

#define UnrealProject_Source_SecondProject_Public_Item_ItemTypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemInformation_Statics; \
	SECONDPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SECONDPROJECT_API UScriptStruct* StaticStruct<struct FItemInformation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Source_SecondProject_Public_Item_ItemTypes_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Sword) \
	op(EWeaponType::TwoHanded) 

enum class EWeaponType : uint8;
template<> SECONDPROJECT_API UEnum* StaticEnum<EWeaponType>();

#define FOREACH_ENUM_EEQUIPMENTTYPE(op) \
	op(EEquipmentType::Weapon) \
	op(EEquipmentType::Shield) \
	op(EEquipmentType::Helmet) \
	op(EEquipmentType::Gloves) \
	op(EEquipmentType::Chest) \
	op(EEquipmentType::Legs) \
	op(EEquipmentType::Boots) \
	op(EEquipmentType::None) 

enum class EEquipmentType : uint8;
template<> SECONDPROJECT_API UEnum* StaticEnum<EEquipmentType>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Equipment) \
	op(EItemType::Consume) 

enum class EItemType : uint8;
template<> SECONDPROJECT_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
