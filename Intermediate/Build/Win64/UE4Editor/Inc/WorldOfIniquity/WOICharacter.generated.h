// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDOFINIQUITY_WOICharacter_generated_h
#error "WOICharacter.generated.h already included, missing '#pragma once' in WOICharacter.h"
#endif
#define WORLDOFINIQUITY_WOICharacter_generated_h

#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_SPARSE_DATA
#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateCamera); \
	DECLARE_FUNCTION(execPitchCamera); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateCamera); \
	DECLARE_FUNCTION(execPitchCamera); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWOICharacter(); \
	friend struct Z_Construct_UClass_AWOICharacter_Statics; \
public: \
	DECLARE_CLASS(AWOICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldOfIniquity"), NO_API) \
	DECLARE_SERIALIZER(AWOICharacter)


#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWOICharacter(); \
	friend struct Z_Construct_UClass_AWOICharacter_Statics; \
public: \
	DECLARE_CLASS(AWOICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldOfIniquity"), NO_API) \
	DECLARE_SERIALIZER(AWOICharacter)


#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWOICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWOICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWOICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWOICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWOICharacter(AWOICharacter&&); \
	NO_API AWOICharacter(const AWOICharacter&); \
public:


#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWOICharacter(AWOICharacter&&); \
	NO_API AWOICharacter(const AWOICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWOICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWOICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWOICharacter)


#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_9_PROLOG
#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_SPARSE_DATA \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_RPC_WRAPPERS \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_INCLASS \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_SPARSE_DATA \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_INCLASS_NO_PURE_DECLS \
	Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDOFINIQUITY_API UClass* StaticClass<class AWOICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Files_Source_WorldOfIniquity_Public_Characters_WOICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
