#include "RebindInputAction.h"
#include "InputMappingContext.h"
#include "Components/InputKeySelector.h"
#include "EnhancedInputSubsystems.h"

void URebindInputAction::NativeConstruct()
{
	Super::NativeConstruct();

	InitializeInputMapping();

	InputKey->OnKeySelected.AddDynamic(this, &URebindInputAction::OnKeySelected);
	InputKey->OnIsSelectingKeyChanged.AddDynamic(this, &URebindInputAction::OnIsSelectingKeyChanged);
}

void URebindInputAction::InitializeInputMapping()
{
	int Index = 0;
	for (FEnhancedActionKeyMapping EnhancedActionKey : InputMappingContext->GetMappings())
	{
		if(EnhancedActionKey.Action == InputAction)
		{
			OrderIndex = Index;
			EnhancedActionKeyArray.Add(EnhancedActionKey);
		}
		++Index;
	}

	//TODO：这里没有做数组越界保护，后面修改
	const FInputChord TempInputChord = EnhancedActionKeyArray[OrderNumber].Key;
	InputKey->SetSelectedKey(TempInputChord);
	CurrentKey = EnhancedActionKeyArray[OrderNumber].Key;
}

void URebindInputAction::InputMappingRefresh()
{
	EnhancedActionKeyArray.Empty();
	InitializeInputMapping();
}

void URebindInputAction::OnKeySelected(FInputChord SelectedKey)
{
	if(bModifying)
	{
		bModifying = false;
		
		//TODO：这里没有做数组越界保护，后面修改
		EnhancedActionKeyArray[OrderNumber].Key = SelectedKey.Key;
		InputMappingContext->GetMapping(OrderIndex) =  EnhancedActionKeyArray[OrderNumber];
		CurrentKey = SelectedKey.Key;
		
		//刷新InputMappingContext
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetOwningPlayer()->GetLocalPlayer());
		if (Subsystem)
			Subsystem->AddMappingContext(InputMappingContext, 0);
	}
}

void URebindInputAction::OnIsSelectingKeyChanged()
{
	bModifying = true;
}
