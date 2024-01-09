#include "ActorAction/QuickActorActionsWidget.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "DebugHeader.h"

void UQuickActorActionsWidget::SelectAllActorsWithSimilarName()
{
	if(!GetEditorActorSubsystem()) return;

	TArray<AActor*> SelectedActors = EditorActorSubsystem->GetSelectedLevelActors();
	uint32 SelectionCounter = 0;

	if(SelectedActors.Num()==0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("没有选中Actor"));
		return;
	}

	if(SelectedActors.Num()>1)
	{
		DebugHeader::ShowNotifyInfo(TEXT("你只能选中一个Actor"));
		return;
	}

	FString SelectedActorName = SelectedActors[0]->GetActorLabel();
	const FString NameToSearch = SelectedActorName.LeftChop(4);

	TArray<AActor*> AllLeveActors = EditorActorSubsystem->GetAllLevelActors();

	for(AActor* ActorInLevel:AllLeveActors)
	{
		if(!ActorInLevel) continue;

		if(ActorInLevel->GetActorLabel().Contains(NameToSearch,SearchCase))
		{
			EditorActorSubsystem->SetActorSelectionState(ActorInLevel,true);
			SelectionCounter++;
		}
	}

	if(SelectionCounter>0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("成功选中") + 
		FString::FromInt(SelectionCounter) + TEXT("个Actor"));
	}
	else
	{
		DebugHeader::ShowNotifyInfo(TEXT("没有找到相同的Actor"));
	}
}

void UQuickActorActionsWidget::DuplicateActors()
{
	if(!GetEditorActorSubsystem()) return;

	TArray<AActor*> SelectedActors = EditorActorSubsystem->GetSelectedLevelActors();
	uint32 Counter = 0;

	if(SelectedActors.Num()==0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("没有选中Actor"));
		return;
	}

	if(NumberOfDuplicates <=0 || OffsetDist == 0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("没有指定重复次数或偏移距离"));
		return;
	}

	for(AActor* SelectedActor:SelectedActors)
	{	
		if(!SelectedActor) continue;

		for(int32 i = 0; i<NumberOfDuplicates; i++)
		{
			AActor* DuplicatedActor = 
			EditorActorSubsystem->DuplicateActor(SelectedActor,SelectedActor->GetWorld());

			if(!DuplicatedActor) continue;

			const float DuplicationOffsetDist = (i+1)*OffsetDist;

			switch(AxisForDuplication)
			{
			case E_DuplicationAxis::EDA_XAxis:

			DuplicatedActor->AddActorWorldOffset(FVector(DuplicationOffsetDist,0.f,0.f));
				break;

			case E_DuplicationAxis::EDA_YAxis:

			DuplicatedActor->AddActorWorldOffset(FVector(0.f,DuplicationOffsetDist,0.f));
				break;

			case E_DuplicationAxis::EDA_ZAxis:

			DuplicatedActor->AddActorWorldOffset(FVector(0.f,0.f,DuplicationOffsetDist));
				break;

			case E_DuplicationAxis::EDA_MAX:
				break;

			default:
				break;
			}

			EditorActorSubsystem->SetActorSelectionState(DuplicatedActor,true);
			Counter++;
		}		
	}

	if(Counter>0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("成功复制了")+
		FString::FromInt(Counter)+TEXT("个Actor"));
	}
}

void UQuickActorActionsWidget::RandomizeActorTransform()
{
	const bool bConditionNotSet = 
	!RandomActorRotation.bRandomizeRotYaw &&
	!RandomActorRotation.bRandomizeRotPitch &&
	!RandomActorRotation.bRandomizeRotRoll &&
	!bRandomizeScale &&
	!bRandomizeOffset;

	if(bConditionNotSet)
	{
		DebugHeader::ShowNotifyInfo(TEXT("未指定变化条件"));
		return;
	}

	if(!GetEditorActorSubsystem()) return;

	TArray<AActor*> SelectedActors = EditorActorSubsystem->GetSelectedLevelActors();
	uint32 Counter = 0;

	if(SelectedActors.Num()==0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("没有选中Actor"));
		return;
	}

	for(AActor* SelectedActor:SelectedActors)
	{
		if(!SelectedActor) continue;

		if(RandomActorRotation.bRandomizeRotYaw)
		{
			const float RandomRotYawValue = FMath::RandRange(RandomActorRotation.RotYawMin,RandomActorRotation.RotYawMax);
			
			SelectedActor->AddActorWorldRotation(FRotator(0.f,RandomRotYawValue,0.f));
		}

		if(RandomActorRotation.bRandomizeRotPitch)
		{
			const float RandomRotPitchValue = FMath::RandRange(RandomActorRotation.RotPitchMin,RandomActorRotation.RotPitchMax);

			SelectedActor->AddActorWorldRotation(FRotator(RandomRotPitchValue,0.f,0.f));
		}

		if(RandomActorRotation.bRandomizeRotRoll)
		{
			const float RandomRotRollValue = FMath::RandRange(RandomActorRotation.RotRollMin,RandomActorRotation.RotRollMax);

			SelectedActor->AddActorWorldRotation(FRotator(0.f,0.f,RandomRotRollValue));
		}

		if(bRandomizeScale)
		{
			SelectedActor->SetActorScale3D(FVector(FMath::RandRange(ScaleMin,ScaleMax)));
		}

		if(bRandomizeOffset)
		{
			const float RandomOffsetValue = FMath::RandRange(OffsetMin,OffsetMax);

			SelectedActor->AddActorWorldOffset(FVector(RandomOffsetValue,RandomOffsetValue,0.f));
		}

		Counter++;
	}

	if(Counter>0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("成功设置了")+
		FString::FromInt(Counter)+TEXT("个Actor"));
	}

}

bool UQuickActorActionsWidget::GetEditorActorSubsystem()
{	
	if(!EditorActorSubsystem)
	{
		EditorActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();
	}
	
	return EditorActorSubsystem != nullptr;
}
