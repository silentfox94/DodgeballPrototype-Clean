// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BallTypeData.generated.h"

class UAnimMontage;
class AActor;

/**
 * Defines a collectible/usable dodgeball type (data-driven).
 */
UCLASS(BlueprintType)
class DODGEBALLPROTOTYPE_API UBallTypeData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// Tag that identifies this ball type (ex: Ball.Basic, Ball.Fire)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ball")
	FGameplayTag BallTag;

	// Projectile actor to spawn when thrown
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ball")
	TSubclassOf<AActor> ProjectileClass;

	// Montage to play for throwing this ball (can be shared between balls)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ball|Animation")
	TObjectPtr<UAnimMontage> ThrowMontage = nullptr;

	// Launch speed (units/sec)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ball")
	float ThrowSpeed = 2500.0f;

	// Optional: cooldown or stamina cost later (leave for future-you)
};
