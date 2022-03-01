// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskAttributeSet.h"

#include "GameplayEffectExtension.h"

UTaskAttributeSet::UTaskAttributeSet()
{
}

void UTaskAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	
	if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		SetStamina(FMath::Clamp(Stamina.GetCurrentValue(), 0.0f, 10000.0f));
		if(GetStamina() > 0)
		{
			SetMoveSpeed(GetIncreasedMoveSpeed());
		}
		else
		{
			SetMoveSpeed(GetDefaultMoveSpeed());
		}
	}
}

