// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS(abstract)
class PAPARAZZI_API ACoin : public AActor {
	GENERATED_BODY()
	
public:	
	ACoin();

	// Called When the Player Hits a Coin
	UFUNCTION(BlueprintCallable, Category = "Score")
		void Collect();

private:
	UPROPERTY(EditAnywhere, Category = "Score", meta = (UIMin = "0"))
		int ScoreYield;
	
	
};
