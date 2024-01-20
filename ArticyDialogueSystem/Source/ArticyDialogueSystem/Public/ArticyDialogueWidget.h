#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ArticyDialogueWidget.generated.h"

class IArticyFlowObject;
class UArticyDialogueSubsystem;
struct FArticyBranch;

UCLASS()
class ARTICYDIALOGUESYSTEM_API UArticyDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite, Category="SubSystem")
	UArticyDialogueSubsystem* DialogueSubsystem;

	virtual void HandleDialogueFragment(TScriptInterface<IArticyFlowObject> PausedOn);
	virtual void HandleBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches);
	
};
