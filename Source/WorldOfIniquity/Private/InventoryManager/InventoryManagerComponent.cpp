// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManager/InventoryManagerComponent.h"

// Sets default values for this component's properties
UInventoryManagerComponent::UInventoryManagerComponent()
{	
	SetIsReplicatedByDefault(true);
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UInventoryManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

