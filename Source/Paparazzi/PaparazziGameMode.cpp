// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PaparazziGameMode.h"

void APaparazziGameMode::BeginPlay() {
	// Add the HUD to the screen
	AddStaminaHUD();
}