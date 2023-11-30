#pragma once

#include "Misc/MessageDialog.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

namespace DebugHeader
{
	inline void Print(const FString& Message, const FColor& Color)
	{
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				8.f,
				Color,
				Message);
		}
	}

	inline void PrintLog(const FString& Message)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
	}

	inline EAppReturnType::Type ShowMsgDialog(EAppMsgType::Type MsgType, const FString& Message, bool bShowMsgAsWarning = true)
	{
		if(bShowMsgAsWarning)
		{
			FText MsgTitle = FText::FromString(TEXT("Warning"));
			return FMessageDialog::Open(MsgType, FText::FromString(Message), &MsgTitle);
		}
	
		return FMessageDialog::Open(MsgType, FText::FromString(Message));
	}

	inline void ShowNotifyInfo(const FString& Message)
	{
		FNotificationInfo NotifyInfo(FText::FromString(Message));
		NotifyInfo.bUseLargeFont = true;
		NotifyInfo.FadeInDuration = 7.f;

		FSlateNotificationManager::Get().AddNotification(NotifyInfo);
	}
}



