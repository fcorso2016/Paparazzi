// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "EnemyBase.generated.h"

UCLASS()
class PAPARAZZI_API AEnemyBase : public ACharacter {
	GENERATED_BODY()

	/** Basic pawn sensing component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detection", meta = (AllowPrivateAccess = "true"))
		UPawnSensingComponent* PawnSensing;

	/** Component that gets the buildings in a radius */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Detection", meta = (AllowPrivateAccess = "true"))
		USphereComponent* DetectionRadius;

public:
	// Sets default values for this character's properties
	AEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AI")
		void OnSeeCharacter(APawn *Pawn, float AcceptanceRadius = -1.f);
	virtual void OnSeeCharacter_Implementation(APawn *Pawn, float AcceptanceRadius = -1.f);

	
	
};
