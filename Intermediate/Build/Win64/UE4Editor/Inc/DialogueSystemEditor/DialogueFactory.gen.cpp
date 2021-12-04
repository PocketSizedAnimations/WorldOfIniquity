// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueSystemEditor/Public/DialogueFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueFactory() {}
// Cross Module References
	DIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueFactory_NoRegister();
	DIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DialogueSystemEditor();
// End Cross Module References
	void UDialogueFactory::StaticRegisterNativesUDialogueFactory()
	{
	}
	UClass* Z_Construct_UClass_UDialogueFactory_NoRegister()
	{
		return UDialogueFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueFactory.h" },
		{ "ModuleRelativePath", "Public/DialogueFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueFactory_Statics::ClassParams = {
		&UDialogueFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueFactory, 2900828480);
	template<> DIALOGUESYSTEMEDITOR_API UClass* StaticClass<UDialogueFactory>()
	{
		return UDialogueFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueFactory(Z_Construct_UClass_UDialogueFactory, &UDialogueFactory::StaticClass, TEXT("/Script/DialogueSystemEditor"), TEXT("UDialogueFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
