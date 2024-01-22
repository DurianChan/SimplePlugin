#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IArticyDialogueHandle.generated.h"


class IArticyFlowObject;
struct FArticyBranch;

UINTERFACE(MinimalAPI, BlueprintType)
class UIArticyDialogueHandle : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARTICYDIALOGUESYSTEM_API IIArticyDialogueHandle
{
	GENERATED_BODY()

public:
	//更新对话流 将UObject转为TScriptInterface<IArticyFlowObject>
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dialouge")
	void HandleDialogueFragment(UObject* HandleObject);
	
	virtual void HandleDialogueFragment_Implementation(UObject* HandleObject);
	
	//更新分支
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dialouge")
	void HandleBranchesUpdated(const TArray<FArticyBranch>& AvailableBranches);

	virtual void HandleBranchesUpdated_Implementation(const TArray<FArticyBranch>& AvailableBranches);
	
	//清除旧的对象
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dialouge")
	void HandleDestroyObject();

	virtual void HandleDestroyObject_Implementation();
};
