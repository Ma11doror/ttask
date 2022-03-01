// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TaskAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class TTASK_M_T_API UTaskAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UTaskAttributeSet();

	UPROPERTY(Category = "Attributes", EditAnywhere, BlueprintReadWrite)
	FGameplayAttributeData MoveSpeed = 600.0f;
	ATTRIBUTE_ACCESSORS(UTaskAttributeSet, MoveSpeed)


	UPROPERTY(Category = "Attributes", EditAnywhere, BlueprintReadWrite)
	FGameplayAttributeData DefaultMoveSpeed = 600.0f;
	ATTRIBUTE_ACCESSORS(UTaskAttributeSet, DefaultMoveSpeed)

	UPROPERTY(Category = "Attributes", EditAnywhere, BlueprintReadWrite)
	FGameplayAttributeData IncreasedMoveSpeed = 1200.0f;
	ATTRIBUTE_ACCESSORS(UTaskAttributeSet, IncreasedMoveSpeed)


	UPROPERTY(Category = "Attributes", EditAnywhere, BlueprintReadWrite)
	FGameplayAttributeData Stamina = 0.0f;
	ATTRIBUTE_ACCESSORS(UTaskAttributeSet, Stamina)


	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
};
