// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "DBAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALLPROTOTYPE_API UDBAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UDBAttributeSet();

	//Health Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing=OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UDBAttributeSet, Health)
	
	ATTRIBUTE_ACCESSORS_BASIC(UDBAttributeSet, MaxHealth)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing=OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;

	//Stamina Attributes
	ATTRIBUTE_ACCESSORS_BASIC(UDBAttributeSet, Stamina)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina;

	ATTRIBUTE_ACCESSORS_BASIC(UDBAttributeSet, MaxStamina)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxStamina)
	FGameplayAttributeData MaxStamina;

public:
	UFUNCTION()
	void ONRep_Health(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UDBAttributeSet, Health, OldValue);
	}

	UFUNCTION()
	void ONRep_MaxHealth(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UDBAttributeSet, MaxHealth, OldValue);
	}

	UFUNCTION()
	void ONRep_Stamina(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UDBAttributeSet, Stamina, OldValue);
	}

	UFUNCTION()
	void ONRep_MaxStamina(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UDBAttributeSet, MaxStamina, OldValue);
	}

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
