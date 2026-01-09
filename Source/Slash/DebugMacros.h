#pragma once
#include "DrawDebugHelpers.h"

//Global Debug Macros

#define DRAW_DEBUG_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 16, FColor::Red, true);
#define DRAW_DEBUG_LINE(Start, End) if (GetWorld()) DrawDebugLine(GetWorld(), Start, End, FColor::Green, true, -1.f, 0, 1.f);
#define DRAW_DEBUG_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Blue, true);
#define DRAW_DEBUG_CONE(Location, Direction, Length) if (GetWorld()) DrawDebugCone(GetWorld(), Location, Direction, Length, FMath::DegreesToRadians(15.f), FMath::DegreesToRadians(15.f), 12, FColor::Yellow, true);

//(An example of writing a macro on multiple lines) - (Also using macros inside macros just for fun)
#define DRAW_VECTOR(Start, End) if (GetWorld()) \
{ \
	DRAW_DEBUG_LINE(Start, End); \
	DRAW_DEBUG_POINT(End); \
}