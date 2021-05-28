// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/Public/Widget/EquipmentButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentButtonWidget() {}
// Cross Module References
	SECONDPROJECT_API UEnum* Z_Construct_UEnum_SecondProject_EEquipmentButtonType();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentButtonWidget_NoRegister();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UEquipmentButtonWidget();
	SECONDPROJECT_API UClass* Z_Construct_UClass_UDragableWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EEquipmentButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SecondProject_EEquipmentButtonType, Z_Construct_UPackage__Script_SecondProject(), TEXT("EEquipmentButtonType"));
		}
		return Singleton;
	}
	template<> SECONDPROJECT_API UEnum* StaticEnum<EEquipmentButtonType>()
	{
		return EEquipmentButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipmentButtonType(EEquipmentButtonType_StaticEnum, TEXT("/Script/SecondProject"), TEXT("EEquipmentButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SecondProject_EEquipmentButtonType_Hash() { return 2507904738U; }
	UEnum* Z_Construct_UEnum_SecondProject_EEquipmentButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SecondProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipmentButtonType"), 0, Get_Z_Construct_UEnum_SecondProject_EEquipmentButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipmentButtonType::Weapon", (int64)EEquipmentButtonType::Weapon },
				{ "EEquipmentButtonType::Shield", (int64)EEquipmentButtonType::Shield },
				{ "EEquipmentButtonType::Helmet", (int64)EEquipmentButtonType::Helmet },
				{ "EEquipmentButtonType::Gloves", (int64)EEquipmentButtonType::Gloves },
				{ "EEquipmentButtonType::Chest", (int64)EEquipmentButtonType::Chest },
				{ "EEquipmentButtonType::Legs", (int64)EEquipmentButtonType::Legs },
				{ "EEquipmentButtonType::Boots", (int64)EEquipmentButtonType::Boots },
				{ "EEquipmentButtonType::Consume", (int64)EEquipmentButtonType::Consume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boots.Comment", "/**\n * \n */" },
				{ "Boots.Name", "EEquipmentButtonType::Boots" },
				{ "Chest.Comment", "/**\n * \n */" },
				{ "Chest.Name", "EEquipmentButtonType::Chest" },
				{ "Comment", "/**\n * \n */" },
				{ "Consume.Comment", "/**\n * \n */" },
				{ "Consume.Name", "EEquipmentButtonType::Consume" },
				{ "Gloves.Comment", "/**\n * \n */" },
				{ "Gloves.Name", "EEquipmentButtonType::Gloves" },
				{ "Helmet.Comment", "/**\n * \n */" },
				{ "Helmet.Name", "EEquipmentButtonType::Helmet" },
				{ "Legs.Comment", "/**\n * \n */" },
				{ "Legs.Name", "EEquipmentButtonType::Legs" },
				{ "ModuleRelativePath", "Public/Widget/EquipmentButtonWidget.h" },
				{ "Shield.Comment", "/**\n * \n */" },
				{ "Shield.Name", "EEquipmentButtonType::Shield" },
				{ "Weapon.Comment", "/**\n * \n */" },
				{ "Weapon.Name", "EEquipmentButtonType::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SecondProject,
				nullptr,
				"EEquipmentButtonType",
				"EEquipmentButtonType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEquipmentButtonWidget::StaticRegisterNativesUEquipmentButtonWidget()
	{
	}
	UClass* Z_Construct_UClass_UEquipmentButtonWidget_NoRegister()
	{
		return UEquipmentButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_ItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quickListBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_quickListBox;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buttonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_buttonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emptyTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_emptyTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/EquipmentButtonWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_Image_Item_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_Image_Item = { "Image_Item", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentButtonWidget, Image_Item), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_Image_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_Image_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_TextBlock_ItemCount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_TextBlock_ItemCount = { "TextBlock_ItemCount", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentButtonWidget, TextBlock_ItemCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_TextBlock_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_TextBlock_ItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_quickListBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_quickListBox = { "quickListBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentButtonWidget, quickListBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_quickListBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_quickListBox_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_buttonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_buttonType_MetaData[] = {
		{ "Category", "EquipmentButtonWidget" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_buttonType = { "buttonType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentButtonWidget, buttonType), Z_Construct_UEnum_SecondProject_EEquipmentButtonType, METADATA_PARAMS(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_buttonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_buttonType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_emptyTexture_MetaData[] = {
		{ "Category", "EquipmentButtonWidget" },
		{ "ModuleRelativePath", "Public/Widget/EquipmentButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_emptyTexture = { "emptyTexture", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentButtonWidget, emptyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_emptyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_emptyTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_Image_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_TextBlock_ItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_quickListBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_buttonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_buttonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentButtonWidget_Statics::NewProp_emptyTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentButtonWidget_Statics::ClassParams = {
		&UEquipmentButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipmentButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentButtonWidget, 3410465446);
	template<> SECONDPROJECT_API UClass* StaticClass<UEquipmentButtonWidget>()
	{
		return UEquipmentButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentButtonWidget(Z_Construct_UClass_UEquipmentButtonWidget, &UEquipmentButtonWidget::StaticClass, TEXT("/Script/SecondProject"), TEXT("UEquipmentButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
