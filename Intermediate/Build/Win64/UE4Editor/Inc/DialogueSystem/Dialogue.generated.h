// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUESYSTEM_Dialogue_generated_h
#error "Dialogue.generated.h already included, missing '#pragma once' in Dialogue.h"
#endif
#define DIALOGUESYSTEM_Dialogue_generated_h

#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_SPARSE_DATA
#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_RPC_WRAPPERS
#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public:


#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue)


#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_PRIVATE_PROPERTY_OFFSET
#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_13_PROLOG
#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_PRIVATE_PROPERTY_OFFSET \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_SPARSE_DATA \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_RPC_WRAPPERS \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_INCLASS \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_PRIVATE_PROPERTY_OFFSET \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_SPARSE_DATA \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_INCLASS_NO_PURE_DECLS \
	Project_Files_Source_DialogueSystem_Public_Dialogue_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUESYSTEM_API UClass* StaticClass<class UDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Files_Source_DialogueSystem_Public_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
