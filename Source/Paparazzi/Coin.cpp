// Fill out your copyright notice in the Description page of Project Settings.

#include "Coin.h"
#include "PaparazziGameInstance.h"

ACoin::ACoin() {
	// Set the default score increase amount
	ScoreYield = 100;
}

void ACoin::Collect() {
	UPaparazziGameInstance* GameInstance = Cast<UPaparazziGameInstance>(GetGameInstance());
	if (GameInstance != nullptr) {
		GameInstance->IncreaseScore(ScoreYield);
	}
	Destroy();
}
