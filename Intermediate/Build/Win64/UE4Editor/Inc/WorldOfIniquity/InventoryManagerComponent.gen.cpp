// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldOfIniquity/Public/InventoryManager/InventoryManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManagerComponent() {}
// Cross Module References
	WORLDOFINIQUITY_API UClass* Z_Construct_UClass_UInventoryManagerComponent_NoRegister();
	WORLDOFINIQUITY_API UClass* Z_Construct_UClass_UInventoryManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WorldOfIniquity();
// End Cross Module References
	void UInventoryManagerComponent::StaticRegisterNativesUInventoryManagerComponent()
	{
	}
	UClass* Z_Construct_UClass_UInventoryManagerComponent_NoRegister()
	{
		return UInventoryManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldOfIniquity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryManager/InventoryManagerComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryManager/InventoryManagerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManagerComponent_Statics::ClassParams = {
		&UInventoryManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryManagerComponent, 314336956);
	template<> WORLDOFINIQUITY_API UClass* StaticClass<UInventoryManagerComponent>()
	{
		return UInventoryManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryManagerComponent(Z_Construct_UClass_UInventoryManagerComponent, &UInventoryManagerComponent::StaticClass, TEXT("/Script/WorldOfIniquity"), TEXT("UInventoryManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
