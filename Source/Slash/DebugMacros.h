#pragma once
#include "DrawDebugHelpers.h"

//Global Debug Macros

//Sphere
#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);
#define DRAW_SPHERE_SingleFrame(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, false, -1.f);

//Line
#define DRAW_LINE(Start, End) if (GetWorld()) DrawDebugLine(GetWorld(), Start, End, FColor::Green, true, -1.f, 0, 1.f);
#define DRAW_LINE_SingleFrame(Start, End) if (GetWorld()) DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, -1.f, 0, 1.f);

//Point
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Blue, true);
#define DRAW_POINT_SingleFrame(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Blue, false, -1.f);

//Cone
#define DRAW_CONE(Location, Direction, Length) if (GetWorld()) DrawDebugCone(GetWorld(), Location, Direction, Length, FMath::DegreesToRadians(15.f), FMath::DegreesToRadians(15.f), 12, FColor::Yellow, true);
#define DRAW_CONE_SingleFrame(Location, Direction, Length) if (GetWorld()) DrawDebugCone(GetWorld(), Location, Direction, Length, FMath::DegreesToRadians(15.f), FMath::DegreesToRadians(15.f), 12, FColor::Yellow, false, -1.f);

//Custom
#define DRAW_VECTOR(Start, End) if (GetWorld()) \
{ \
	DRAW_LINE(Start, End); \
	DRAW_POINT(End); \
}
#define DRAW_VECTOR_SingleFrame(Start, End) if (GetWorld()) \
{ \
	DRAW_LINE_SingleFrame(Start, End); \
	DRAW_POINT_SingleFrame(End); \
}