// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

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

	UE_LOG(LogTemp, Warning, TEXT("Item Output Log Message")); //basic output log message

	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item Onscreen Message")); //basic onscreen message
	}
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);
	
	if (GEngine) //because of the possibility that GEngine might be a null pointer, we check if it is valid before using it
	{
		FString Name = GetName(); //gets the name of the attached actor
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name); //formats the message to be displayed onscreen, making use of a variable
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message); //displays the message onscreen for 60 seconds in cyan color

		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name); //puts a message in the output log making use of a variable
	}

}

