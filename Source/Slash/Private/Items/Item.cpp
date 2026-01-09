// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Slash/Slash.h"
#include "Slash/DebugMacros.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	//macro usage example, becuase i encluded a semi-colon in the macro definition, it isnt needed here, as a macro replaces it name at runtime.
	//however, i have added semi-colons here, to avoid the automatic indentation when writing a new line beneath.
	DRAW_DEBUG_SPHERE(Location);
	DRAW_VECTOR(Location, Location + Forward * 100.f);

}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

