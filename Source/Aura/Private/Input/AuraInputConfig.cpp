// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag,
	bool bLogNotFound) const
{
	for (const FAuraInputAction& InputAction : AbilityInputAction)
	{
		if (InputAction.InputTag == InputTag)
		{
			return InputAction.InputAction;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find input action for tag %s in AuraInputConfig"), *InputTag.ToString());
	}
	return nullptr;
}
