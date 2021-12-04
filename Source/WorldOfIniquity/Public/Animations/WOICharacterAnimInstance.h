 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WOICharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintThreadSafe))
class WORLDOFINIQUITY_API UWOICharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:


	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Movement")
		bool IsMoving();
};
