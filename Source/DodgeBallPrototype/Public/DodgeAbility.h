// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "DodgeAbility.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALLPROTOTYPE_API UDodgeAbility : public UGameplayAbility
{
    GENERATED_BODY()

public:
    UDodgeAbility();

    virtual void ActivateAbility(
        const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData) override;

private:
    UPROPERTY(EditDefaultsOnly, Category = "Dodge")
    UAnimMontage* AnimMontage;

    UPROPERTY(EditDefaultsOnly, Category = "Dodge")
    FGameplayTag DodgeStateTag;

    UFUNCTION()
    void OnMontageCompleted();

    UFUNCTION()
    void OnMontageBlendOut();
};