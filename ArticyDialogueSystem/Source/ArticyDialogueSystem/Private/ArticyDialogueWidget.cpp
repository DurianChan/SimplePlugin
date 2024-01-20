#include "ArticyDialogueWidget.h"
#include "ArticyFlowPlayer.h"

void UArticyDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	const UGameInstance* GameInstance = GetGameInstance();
	if(GameInstance)
	{
		DialogueSubsystem = GameInstance->GetSubsystem<UArticyDialogueSubsystem>();
	}
}

void UArticyDialogueWidget::HandleDialogueFragment(TScriptInterface<IArticyFlowObject> PausedOn)
{
}

void UArticyDialogueWidget::HandleBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches)
{
}


