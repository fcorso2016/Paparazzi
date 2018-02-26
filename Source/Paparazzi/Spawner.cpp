// Fill out your copyright notice in the Description page of Project Settings.

#include "Spawner.h"


// Sets default values
ASpawner::ASpawner() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set timer
	CoinSpawnTime = 0.f;

}

// Called when the game starts or when spawned
void ASpawner::BeginPlay() {
	Super::BeginPlay();
	
}

// Called every frame
void ASpawner::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	CoinSpawnTime -= DeltaTime;
	if (CoinSpawnTime <= 0.f) {
		CoinSpawnTime = 5.f;
		SpawnCoins();
	}
}

