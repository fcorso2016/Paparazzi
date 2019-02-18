// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PaparazziGameMode.generated.h"

UCLASS(minimalapi)
class APaparazziGameMode : public AGameModeBase {
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
	void AddStaminaHUD();

};



