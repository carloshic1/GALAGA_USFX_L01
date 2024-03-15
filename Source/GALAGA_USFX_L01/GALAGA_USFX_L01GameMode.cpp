// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_L01GameMode.h"
#include "GALAGA_USFX_L01Pawn.h"

AGALAGA_USFX_L01GameMode::AGALAGA_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_L01Pawn::StaticClass();
}

