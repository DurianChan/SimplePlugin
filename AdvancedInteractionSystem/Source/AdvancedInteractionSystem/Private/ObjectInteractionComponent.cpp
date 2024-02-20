// Copyright Durian Chan


#include "ObjectInteractionComponent.h"


UObjectInteractionComponent::UObjectInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UObjectInteractionComponent::GetParameterValueByKey(const TArray<FInteractionParameter>& Parameters,const FString Key, FString& OutValue)
{
	for (auto& param : Parameters)
	{
		if (param.Key == Key)
		{
			OutValue = param.Value;
			return true;
		}
	}
	
	return false;
}


