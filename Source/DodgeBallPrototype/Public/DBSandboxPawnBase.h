// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "MoverComponent.h"
#include "DBAttributeSet.h"
#include "DBSandboxPawnBase.generated.h"

UCLASS()
class DODGEBALLPROTOTYPE_API ADBSandboxPawnBase : public APawn, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ADBSandboxPawnBase();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:

	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Capsule")
	TObjectPtr<UCapsuleComponent> CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UDBAttributeSet> DBAttributeSet;
};
