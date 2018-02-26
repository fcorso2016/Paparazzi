// Fill out your copyright notice in the Description page of Project Settings.

#include "PaparazziGameInstance.h"

UPaparazziGameInstance::UPaparazziGameInstance(const FObjectInitializer &ObjectInitializer) : UGameInstance(ObjectInitializer) {
	// Set default lives to 2 (3 technically since 0 counts)
	Lives = 2;

	// Each level starts with a score of 0
	Score = 0;

}

// Controls Lives
int UPaparazziGameInstance::GetLives() const {
	return Lives;
}

void UPaparazziGameInstance::Get1UP() {
	Lives++;
}

void UPaparazziGameInstance::LoseLife() {
	if (Lives > 0) {
		Lives--;
	}
}

bool UPaparazziGameInstance::IsGameOver() const {
	return Lives == 0;
}

// Controls Score
int UPaparazziGameInstance::GetScore() const {
	return Score;
}

void UPaparazziGameInstance::IncreaseScore(int Amount) {
	Score += Amount;
}

void UPaparazziGameInstance::ResetScore() {
	Score = 0;
}