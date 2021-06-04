// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondProject_init() {}
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_OnDeath__DelegateSignature();
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature();
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature();
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature();
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_UseQuick__DelegateSignature();
	SECONDPROJECT_API UFunction* Z_Construct_UDelegateFunction_SecondProject_AddQuick__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SecondProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondProject_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondProject_ChangeMoveState__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondProject_Equip__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondProject_UnEquip__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondProject_UseQuick__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondProject_AddQuick__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SecondProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDF9CB107,
				0xF9CFEC6C,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
