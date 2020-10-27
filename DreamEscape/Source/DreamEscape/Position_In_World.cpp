// Fill out your copyright notice in the Description page of Project Settings.


#include "Position_In_World.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPosition_In_World::UPosition_In_World()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPosition_In_World::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hello"));

	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("The object is named: %s"), *ObjectName);
}


// Called every frame
void UPosition_In_World::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

