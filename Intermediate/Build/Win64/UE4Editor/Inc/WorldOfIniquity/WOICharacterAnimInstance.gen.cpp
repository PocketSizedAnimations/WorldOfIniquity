// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldOfIniquity/Public/Animations/WOICharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWOICharacterAnimInstance() {}
// Cross Module References
	WORLDOFINIQUITY_API UClass* Z_Construct_UClass_UWOICharacterAnimInstance_NoRegister();
	WORLDOFINIQUITY_API UClass* Z_Construct_UClass_UWOICharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_WorldOfIniquity();
// End Cross Module References
	DEFINE_FUNCTION(UWOICharacterAnimInstance::execIsMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMoving();
		P_NATIVE_END;
	}
	void UWOICharacterAnimInstance::StaticRegisterNativesUWOICharacterAnimInstance()
	{
		UClass* Class = UWOICharacterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMoving", &UWOICharacterAnimInstance::execIsMoving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics
	{
		struct WOICharacterAnimInstance_eventIsMoving_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WOICharacterAnimInstance_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WOICharacterAnimInstance_eventIsMoving_Parms), &Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animations/WOICharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWOICharacterAnimInstance, nullptr, "IsMoving", nullptr, nullptr, sizeof(WOICharacterAnimInstance_eventIsMoving_Parms), Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWOICharacterAnimInstance_NoRegister()
	{
		return UWOICharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWOICharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWOICharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldOfIniquity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWOICharacterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWOICharacterAnimInstance_IsMoving, "IsMoving" }, // 3020716521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWOICharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/WOICharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/WOICharacterAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWOICharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWOICharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWOICharacterAnimInstance_Statics::ClassParams = {
		&UWOICharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWOICharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWOICharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWOICharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWOICharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWOICharacterAnimInstance, 3668657077);
	template<> WORLDOFINIQUITY_API UClass* StaticClass<UWOICharacterAnimInstance>()
	{
		return UWOICharacterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWOICharacterAnimInstance(Z_Construct_UClass_UWOICharacterAnimInstance, &UWOICharacterAnimInstance::StaticClass, TEXT("/Script/WorldOfIniquity"), TEXT("UWOICharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWOICharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
