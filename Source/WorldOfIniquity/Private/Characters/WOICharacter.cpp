// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/WOICharacter.h"

/*camera*/
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

/*collision*/
#include "Components/CapsuleComponent.h"

/*inventory*/
#include "InventoryManager/InventoryManagerComponent.h"

/*movement*/
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AWOICharacter::AWOICharacter(const FObjectInitializer& ObjectInitializer)
{
	
	InventoryManager = ObjectInitializer.CreateDefaultSubobject<UInventoryManagerComponent>(this, TEXT("InventoryManagerComp"));
	if (InventoryManager)
	{

	}
	
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
		GetCharacterMovement()->AirControl = 0.2f;

	}
	
	SpringArmComponent = ObjectInitializer.CreateDefaultSubobject<USpringArmComponent>(this, TEXT("SpringArmComp"));
	CameraComponent = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this, TEXT("CameraComp"));
	if (SpringArmComponent)
	{
		SpringArmComponent->SetupAttachment(GetCapsuleComponent());
		SpringArmComponent->AddRelativeLocation(FVector(0, 0, 80));
		SpringArmComponent->TargetArmLength = 300.0f;
		SpringArmComponent->bUsePawnControlRotation = true;
	}
	if (CameraComponent)
	{
		CameraComponent->SetupAttachment(SpringArmComponent);
		CameraComponent->SetRelativeLocation(FVector(0, 0, 80));
		CameraComponent->SetRelativeRotation(FRotator(-15,0,0));
		CameraComponent->bUsePawnControlRotation = false;
	}

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
	
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWOICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWOICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWOICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &AWOICharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AWOICharacter::MoveRight);
	InputComponent->BindAxis("PitchCamera", this, &AWOICharacter::PitchCamera);
	InputComponent->BindAxis("RotateCamera", this, &AWOICharacter::RotateCamera);
}

void AWOICharacter::MoveForward(float Value)
{
	if (Value == 0.0f || !Controller)
		return;

	// find out which way is forward
	const FRotator Rotation = TargetedActor == nullptr ? Controller->GetControlRotation() : (TargetedActor->GetActorLocation() - GetActorLocation()).GetSafeNormal().Rotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	// get forward vector
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Value);

}

void AWOICharacter::MoveRight(float Value)
{
	if (Value == 0.0f || !Controller)
		return;


	// find out which way is right
	const FRotator Rotation = TargetedActor == nullptr ? Controller->GetControlRotation() : (TargetedActor->GetActorLocation() - GetActorLocation()).GetSafeNormal().Rotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	// get right vector 
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
	
}

void AWOICharacter::PitchCamera(float Value)
{
	AddControllerPitchInput(Value);
}

void AWOICharacter::RotateCamera(float Value)
{
	AddControllerYawInput(Value);
}

