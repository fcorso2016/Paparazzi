// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PaparazziGameMode.h"
#include "PaparazziCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaparazziGameMode::APaparazziGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}

void APaparazziGameMode::BeginPlay() {
	// Add the HUD to the screen
	AddStaminaHUD();
}