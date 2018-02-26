// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyBase.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "PaparazziCharacter.h"


// Sets default values
AEnemyBase::AEnemyBase() {
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the pawn sensing component
	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));

	// Start to wander and begin tick every second
	WanderTick = 0.f;

}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay() {
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	// Advance Wander Tick and Wander if at zero
	WanderTick -= DeltaTime;
	if (WanderTick <= 0.f) {
		WanderTick = 5.f;
		Wander(WanderBounds);
	}
}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyBase::OnSeeCharacter_Implementation(APawn* Pawn, float AcceptanceRadius) {
	if (Pawn->IsA(APaparazziCharacter::StaticClass())) {
		AAIController* Controller = Cast<AAIController>(GetController());
		//Controller->MoveToActor(Pawn, AcceptanceRadius);
		FVector PlayerPos = Pawn->GetActorLocation();
		Controller->MoveToLocation(PlayerPos, AcceptanceRadius);
	}
}

