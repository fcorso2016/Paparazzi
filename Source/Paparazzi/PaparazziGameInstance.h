// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PaparazziGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PAPARAZZI_API UPaparazziGameInstance : public UGameInstance {
	GENERATED_BODY()
	
public:
	UPaparazziGameInstance(const FObjectInitializer &ObjectInitializer);

	// Controls Lives
	UFUNCTION(BlueprintPure, Category = "Live")
		int GetLives() const;
	UFUNCTION(BlueprintCallable, Category = "Lives", DisplayName = "Get 1-UP")
		void Get1UP();
	UFUNCTION(BlueprintCallable, Category = "Lives")
		void LoseLife();
	UFUNCTION(BlueprintCallable, Category = "Lives")
		void ResetLives();
	UFUNCTION(BlueprintPure, Category = "Live")
		bool IsGameOver() const;

	// Controls Score
	UFUNCTION(BlueprintPure, Category = "Score")
		int GetScore() const;
	UFUNCTION(BlueprintCallable, Category = "Score")
		void IncreaseScore(int Amount);
	UFUNCTION(BlueprintCallable, Category = "Score")
		void ResetScore();

private:
	// Indicates Life Count
	int Lives;

	// Indicates Score
	int Score;
	
};
