// Fill out your copyright notice in the Description page of Project Settings.


#include "Animations/WOICharacterAnimInstance.h"
#include "Characters/WOICharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"





bool UWOICharacterAnimInstance::IsMoving()
{
	/*editor-previewer hack*/
	if (!TryGetPawnOwner())
		return false;

	FVector Velocity = Cast<AWOICharacter>(TryGetPawnOwner())->GetCharacterMovement()->Velocity;

	if (Velocity.Size() > 0)
		return true;
	else
		return false;
}