#include "BranchesButtonWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Interfaces/ArticyObjectWithMenuText.h"

void UBranchesButtonWidget::NativeConstruct()
{
	Super::NativeConstruct();

	BranchButton->OnClicked.AddDynamic(this, &UBranchesButtonWidget::OnClickBranchButton);
}

void UBranchesButtonWidget::AssignBranchButton(UArticyFlowPlayer* ArticyFlowPlayer, FArticyBranch BranchData)
{
	FlowPlayer = ArticyFlowPlayer;
	ArticyBranch = BranchData;

	const IArticyObjectWithMenuText* MenuText = Cast<IArticyObjectWithMenuText>(BranchData.GetTarget().GetInterface());
	FText PreviewText;
	if(MenuText)
		PreviewText = MenuText->GetMenuText();
	
	ButtonText->SetText(PreviewText);
}

void UBranchesButtonWidget::OnClickBranchButton()
{
	FlowPlayer->PlayBranch(ArticyBranch);
}
