// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Slash/Slash.h"
#include "Slash/DebugMacros.h"
#include "DrawDebugHelpers.h"


// Sets default values (constructor)
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	int32 AvgInt = Avg<int32>(1, 3);
	UE_LOG(LogTemp, Warning, TEXT("Average of 1 and 3 is: %d"), AvgInt);

	float AvgFloat = Avg<float>(5.5f, 6.7f);
	UE_LOG(LogTemp, Warning, TEXT("Average of 5.5 and 6.7 is: %f"), AvgFloat);

}

float AItem::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float AItem::TransformedCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

	//float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);

	//AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));

	DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);

	FVector AvgVector = Avg<FVector>(GetActorLocation(), FVector::ZeroVector);
	DRAW_POINT_SingleFrame(AvgVector);
	FRotator AvgRotator = Avg<FRotator>(GetActorRotation(), FRotator::ZeroRotator);

}

