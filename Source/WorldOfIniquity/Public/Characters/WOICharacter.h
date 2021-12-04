// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WOICharacter.generated.h"

UCLASS()
class WORLDOFINIQUITY_API AWOICharacter : public ACharacter
{
	GENERATED_BODY()
public:

	//======================
	//========CAMERA========
	//======================
	UPROPERTY(VisibleAnywhere, Category = "Camera")
		class UCameraComponent* CameraComponent;
	UPROPERTY(VisibleAnywhere, Category = "Camera")
		class USpringArmComponent* SpringArmComponent;


	//======================
	//========COMBAT========
	//======================
	UPROPERTY()
		AActor* TargetedActor;


	//=====================================
	//==========INVENTORY MANAGER==========
	//=====================================
	UPROPERTY()
		class UInventoryManagerComponent* InventoryManager;


	//=========================================================================================================
	//================================================FUNCTIONS================================================
	//=========================================================================================================

public:
	// Sets default values for this character's properties
	AWOICharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	UFUNCTION()
		virtual void MoveForward(float Value);
	UFUNCTION()
		virtual void MoveRight(float Value);
	UFUNCTION()
		virtual void PitchCamera(float Value);
	UFUNCTION()
		virtual void RotateCamera(float Value);

};
