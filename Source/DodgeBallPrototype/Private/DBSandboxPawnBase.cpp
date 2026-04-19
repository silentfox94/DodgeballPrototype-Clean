// Fill out your copyright notice in the Description page of Project Settings.


#include "DBSandboxPawnBase.h"

ADBSandboxPawnBase::ADBSandboxPawnBase()
{
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	RootComponent = CapsuleComponent;
	CapsuleComponent->SetCollisionProfileName(TEXT("Pawn"));

	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	DBAttributeSet = CreateDefaultSubobject<UDBAttributeSet>(TEXT("DBAttributeSet"));
}

UAbilitySystemComponent* ADBSandboxPawnBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}