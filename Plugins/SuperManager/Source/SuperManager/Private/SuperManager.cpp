// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperManager.h"
#include "ContentBrowserModule.h"
#include "DebugHeader.h"
#include "EditorAssetLibrary.h"
#include "ObjectTools.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "LevelEditor.h"
#include "SceneOutlinerModule.h"
#include "Selection.h"
#include "CustomOutlinerColumn/OutlinerSelectionLockColumn.h"
#include "SlateWidgets/AdvanceDeletionWidget.h"
#include "CustomStyle/SuperManagerStyle.h"
#include "SceneOutliner/Public/ISceneOutliner.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "CustomUICommand/SuperManagerUICommands.h"

#define LOCTEXT_NAMESPACE "FSuperManagerModule"

void FSuperManagerModule::StartupModule()
{
	FSuperManagerStyle::InitializeIcons();
	
	InitCBMenuExtention();

	RegisterAdvanceDeletionTab();

	FSuperManagerUICommands::Register();

	InitCustomUICommands();
	
	InitLevelEditorExtention();

	InitCustomSelectionEvent();

	InitSceneOutlinerColumnExtension();
}
#pragma region ContentBrowserMenuExtention

void FSuperManagerModule::InitCBMenuExtention()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	//获取所有菜单扩展程序
	TArray<FContentBrowserMenuExtender_SelectedPaths>& ContentBrowserModuleMenuExtenders = ContentBrowserModule.GetAllPathViewContextMenuExtenders();

	FContentBrowserMenuExtender_SelectedPaths CustomCBMenuDelegate;
	CustomCBMenuDelegate.BindRaw(this, &FSuperManagerModule::CustomCBMenuExtender);
	ContentBrowserModuleMenuExtenders.Add(CustomCBMenuDelegate);

	//我们将自定义委托添加到所有现有委托中
	ContentBrowserModuleMenuExtenders.Add(FContentBrowserMenuExtender_SelectedPaths::
	CreateRaw(this, &FSuperManagerModule::CustomCBMenuExtender));
}

//定义插入菜单项的位置
TSharedRef<FExtender> FSuperManagerModule::CustomCBMenuExtender(const TArray<FString>& SelectedPaths)
{
	TSharedRef<FExtender> MenuExtender (new FExtender());

	if(SelectedPaths.Num()>0)
	{
		//扩展hook，在菜单中插入Delete位置
		MenuExtender->AddMenuExtension(FName("Delete"),
		//在前面或后面插入
		EExtensionHook::After,
		//自定义热键
		TSharedPtr<FUICommandList>(),
		//第二次绑定，将定义此菜单项的详细信息
		FMenuExtensionDelegate::CreateRaw(this,&FSuperManagerModule::AddCBMenuEntry));

		FolderPathsSelected = SelectedPaths;
	}
	
	return MenuExtender;
}

//定义自定义菜单项的详细信息
void FSuperManagerModule::AddCBMenuEntry(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry
	(
		//菜单项标题
		FText::FromString(TEXT("Delete Unused Assets")),
		//菜单项提示
		FText::FromString(TEXT("Safely delete all unused assets under folder")),
		//图标
		FSlateIcon(FSuperManagerStyle::GetStyleSetName(), "ContentBrowser.DeleteUnusedAssets"),
		//要执行的实际功能
		FExecuteAction::CreateRaw(this, &FSuperManagerModule::OnDeleteUnusedAssetButtonClicked)
	);

	MenuBuilder.AddMenuEntry
	(
		FText::FromString(TEXT("Delete Empty Folders")),
		FText::FromString(TEXT("Safely delete all empty folders")),
		FSlateIcon(FSuperManagerStyle::GetStyleSetName(), "ContentBrowser.DeleteEmptyFolders"),
		FExecuteAction::CreateRaw(this, &FSuperManagerModule::OnDeleteEmptyFoldersButtonClicked)
	);

	MenuBuilder.AddMenuEntry
	(
		FText::FromString(TEXT("Advance Deletion")),
		FText::FromString(TEXT("List assets by specific condition in a tab for deleting")),
		FSlateIcon(FSuperManagerStyle::GetStyleSetName(), "ContentBrowser.AdvanceDeletion"),
		FExecuteAction::CreateRaw(this, &FSuperManagerModule::OnAdvanceDeletionButtonClicked)
	);
}

void FSuperManagerModule::OnDeleteUnusedAssetButtonClicked()
{
	if(DockTab.IsValid())
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok,TEXT("请关闭窗口前执行该操作"));
		return;
	}
	
	if(FolderPathsSelected.Num() > 1)
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok,TEXT("只允许操作一个文件夹"));
		return;
	}

	TArray<FString> AssetsPathNames = UEditorAssetLibrary::ListAssets(FolderPathsSelected[0]);

	//所选文件夹下是否有资产
	if(AssetsPathNames.Num() == 0)
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok,TEXT("选中文件夹下找不到资产"));
		return;
	}

	EAppReturnType::Type ConfirmResult =
	DebugHeader::ShowMsgDialog(EAppMsgType::YesNo,TEXT("总共有") + FString::FromInt(AssetsPathNames.Num()) + TEXT("个资产。\n确定要删除吗？"), false);

	if(ConfirmResult == EAppReturnType::No) return;

	FixupRedirectors();

	TArray<FAssetData> UnusedAssetsDatas;
	for(const FString& AssetPathName : AssetsPathNames)
	{
		//不要删除引擎默认文件，会引起崩溃
		if(AssetPathName.Contains(TEXT("Developers")) || AssetPathName.Contains(TEXT("Collections"))
			|| AssetPathName.Contains(TEXT("__ExternalActors__")) || AssetPathName.Contains(TEXT("__ExternalObjects__")))
		{
			continue;
		}

		//判断资产是否存在
		if(!UEditorAssetLibrary::DoesAssetExist(AssetPathName)) continue;

		TArray<FString> AssetReferencers = UEditorAssetLibrary::FindPackageReferencersForAsset(AssetPathName);
		if(AssetReferencers.Num() == 0)
		{
			const FAssetData UnusedAssetData = UEditorAssetLibrary::FindAssetData(AssetPathName);
			UnusedAssetsDatas.Add(UnusedAssetData);
		}
	}

	if(UnusedAssetsDatas.Num() > 0)
	{
		const int32 NumOfAssetsDeleted = ObjectTools::DeleteAssets(UnusedAssetsDatas);
		if(NumOfAssetsDeleted > 0)
		{
			DebugHeader::ShowNotifyInfo(TEXT("成功删除了") + FString::FromInt(NumOfAssetsDeleted) + TEXT("个文件"));
		}
	}
	else
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok,TEXT("选中文件夹下未找到没有被使用的资产"), false);
	}
}

void FSuperManagerModule::OnDeleteEmptyFoldersButtonClicked()
{
	if(DockTab.IsValid())
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok,TEXT("请关闭窗口前执行该操作"));
		return;
	}
	
	FixupRedirectors();
	
	TArray<FString> FolderPathsArray = UEditorAssetLibrary::ListAssets(FolderPathsSelected[0], true, true);
	uint32 Counter = 0;
	
	FString EmptyFolderPathsNames;
	TArray<FString> EmptyFoldersPathsArray;

	for (const FString& FolderPath : FolderPathsArray)
	{
		//不要删除引擎默认文件，会引起崩溃
		if(FolderPath.Contains(TEXT("Developers")) || FolderPath.Contains(TEXT("Collections"))
			|| FolderPath.Contains(TEXT("__ExternalActors__")) || FolderPath.Contains(TEXT("__ExternalObjects__")))
		{
			continue;
		}

		if(!UEditorAssetLibrary::DoesDirectoryExist(FolderPath)) continue;
		
		//检测到文件夹下没有资产，将路径添加到数组中，并添加到字符串存储信息
		if(!UEditorAssetLibrary::DoesDirectoryHaveAssets(FolderPath))
		{
			EmptyFolderPathsNames.Append(FolderPath);
			EmptyFolderPathsNames.Append(TEXT("\n"));

			EmptyFoldersPathsArray.Add(FolderPath);
		}
	}

	if(EmptyFoldersPathsArray.Num() == 0)
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok, TEXT("所选文件夹下没有空文件夹"), false);
		return;
	}

	EAppReturnType::Type ConfirmResult = DebugHeader::ShowMsgDialog(EAppMsgType::OkCancel, TEXT("找到以下空文件夹的目录：\n")
		+ EmptyFolderPathsNames + TEXT("\n是否要全部删除？"), false);

	if(ConfirmResult == EAppReturnType::Cancel) return;

	for (const FString& EmptyFolderPath : EmptyFoldersPathsArray)
	{
		UEditorAssetLibrary::DeleteDirectory(EmptyFolderPath) ?
			++Counter : DebugHeader::Print(TEXT("删除") + EmptyFolderPath + TEXT("失败"), FColor::Red);
	}

	if(Counter > 0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("共成功删除了") + FString::FromInt(Counter) + TEXT("个文件夹"));
	}
}

void FSuperManagerModule::OnAdvanceDeletionButtonClicked()
{
	FixupRedirectors();
	
	//需要与注册的窗口名称一致对应
	FGlobalTabmanager::Get()->TryInvokeTab(FName("AdvanceDeletion"));
}

//文件重定向器
void FSuperManagerModule::FixupRedirectors()
{
	TArray<UObjectRedirector*> RedirectorsToFixArray;

	const FAssetRegistryModule& AssetRegistryModule = FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	FARFilter Filter;
	Filter.bRecursivePaths = true;
	Filter.PackagePaths.Emplace("/Game");
	Filter.ClassPaths.Emplace("ObjectRedirector");

	TArray<FAssetData> OutRedirectors;
	AssetRegistryModule.Get().GetAssets(Filter,OutRedirectors);

	for(const FAssetData& RedirectorData:OutRedirectors)
	{
		if(UObjectRedirector* RedirectorToFix = Cast<UObjectRedirector>(RedirectorData.GetAsset()))
		{
			RedirectorsToFixArray.Add(RedirectorToFix);
		}
	}

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));

	AssetToolsModule.Get().FixupReferencers(RedirectorsToFixArray);
}

#pragma endregion

#pragma region ContentEditorTab

void FSuperManagerModule::RegisterAdvanceDeletionTab()
{
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
		FName("AdvanceDeletion"),
		FOnSpawnTab::CreateRaw(this, &FSuperManagerModule::OnSpawnAdvanceDeletionTab)
		).SetDisplayName(FText::FromString(TEXT("Advance Deletion")))
		.SetIcon(FSlateIcon(FSuperManagerStyle::GetStyleSetName(), "ContentBrowser.AdvanceDeletion"));
}

TSharedRef<SDockTab> FSuperManagerModule::OnSpawnAdvanceDeletionTab(const FSpawnTabArgs& SpawnTabArgs)
{
	if(FolderPathsSelected.Num() ==0) return SNew(SDockTab).TabRole(NomadTab);
	
	DockTab = SNew(SDockTab).TabRole(ETabRole::NomadTab)
	[
		SNew(SAdvanceDeletionTab)
		.AssetsDataToStore(GetAllAssetDataUnderSelectedFolder())
		.CurrentSelectedFolder(FolderPathsSelected[0])
	];
	
	DockTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateRaw(this, &FSuperManagerModule::OnAdvaceDeletionTabClosed));

	return DockTab.ToSharedRef();
}

TArray<TSharedPtr<FAssetData>> FSuperManagerModule::GetAllAssetDataUnderSelectedFolder()
{
	TArray< TSharedPtr <FAssetData> > AvaiableAssetsData;

	TArray<FString> AssetsPathNames = UEditorAssetLibrary::ListAssets(FolderPathsSelected[0]);

	for(const FString& AssetPathName:AssetsPathNames)
	{
		if(AssetPathName.Contains(TEXT("Developers"))||
		AssetPathName.Contains(TEXT("Collections")) ||
		AssetPathName.Contains(TEXT("__ExternalActors__")) ||
		AssetPathName.Contains(TEXT("__ExternalObjects__")))
		{
			continue;
		}

		if(!UEditorAssetLibrary::DoesAssetExist(AssetPathName)) continue;

		const FAssetData Data = UEditorAssetLibrary::FindAssetData(AssetPathName);
		AvaiableAssetsData.Add(MakeShared<FAssetData>(Data));
	}

	return AvaiableAssetsData;
}

void FSuperManagerModule::OnAdvaceDeletionTabClosed(TSharedRef<SDockTab> TabToClose)
{
	if(DockTab.IsValid())
	{
		DockTab.Reset();
		FolderPathsSelected.Empty();
	}
}

#pragma endregion

#pragma region ProccessDataForAdvanceDeletionTab

bool FSuperManagerModule::DeleteSingleAssetForAssetList(const FAssetData& AssetDataToDelete)
{
	TArray<FAssetData> AssetDataForDeletion;
	AssetDataForDeletion.Add(AssetDataToDelete);
	
	if(ObjectTools::DeleteAssets(AssetDataForDeletion) > 0)
	{
		return true;
	}

	return false;
}

bool FSuperManagerModule::DeleteMultipleAssetsForAssetList(const TArray<FAssetData>& AssetsToDelete)
{
	if(ObjectTools::DeleteAssets(AssetsToDelete) > 0)
	{
		return true;
	}
	
	return false;
}

void FSuperManagerModule::ListUnusedAssetForAssetList(const TArray<TSharedPtr<FAssetData>>& AssetsDataToFilter,
	TArray<TSharedPtr<FAssetData>>& OutUnusedAssetsData)
{
	OutUnusedAssetsData.Empty();
	
	for (const TSharedPtr<FAssetData>& DataSharedPtr : AssetsDataToFilter)
	{
		TArray<FString> AssetsReferencers = UEditorAssetLibrary::FindPackageReferencersForAsset(DataSharedPtr->GetSoftObjectPath().ToString());

		if(AssetsReferencers.Num() == 0)
		{
			OutUnusedAssetsData.Add(DataSharedPtr);
		}
	}
}

void FSuperManagerModule::ListSameNameAssetsForAssetList(
   const TArray<TSharedPtr<FAssetData>>& AssetsDataToFilter, TArray<TSharedPtr<FAssetData>>& OutSameNameAssetsData)
{
	OutSameNameAssetsData.Empty();

	//Multimap for supporting finding assets with same name
	TMultiMap<FString, TSharedPtr<FAssetData>> AssetsInfoMultiMap;

	for (const TSharedPtr<FAssetData>& DataSharedPtr : AssetsDataToFilter)
	{
		AssetsInfoMultiMap.Emplace(DataSharedPtr->AssetName.ToString(), DataSharedPtr);
	}

	for (const TSharedPtr<FAssetData>& DataSharedPtr : AssetsDataToFilter)
	{
		TArray<TSharedPtr<FAssetData>> OutAssetsData;
		AssetsInfoMultiMap.MultiFind(DataSharedPtr->AssetName.ToString(), OutAssetsData);

		if(OutAssetsData.Num() <= 1) continue;

		for (const TSharedPtr<FAssetData>& SameNameData : OutAssetsData)
		{
			if(SameNameData.IsValid())
			{
				OutSameNameAssetsData.AddUnique(SameNameData);
			}
		}
	}
}

void FSuperManagerModule::SyncCBToClickedAssetForAssetList(const FString& AssetPathToSync)
{
	TArray<FString> AssetsPathToSync;
	AssetsPathToSync.Add(AssetPathToSync);
	
	UEditorAssetLibrary::SyncBrowserToObjects(AssetsPathToSync);
}

#pragma endregion

#pragma region LevelEditorMenuExtention

void FSuperManagerModule::InitLevelEditorExtention()
{	
	FLevelEditorModule& LevelEditorModule =
	FModuleManager::LoadModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));

	TSharedRef<FUICommandList> ExistingLevelCommands = LevelEditorModule.GetGlobalLevelEditorActions();
	ExistingLevelCommands->Append(CustomUICommands.ToSharedRef());

	TArray<FLevelEditorModule::FLevelViewportMenuExtender_SelectedActors>& LevelEditorMenuExtenders =
	LevelEditorModule.GetAllLevelViewportContextMenuExtenders();

	LevelEditorMenuExtenders.Add(FLevelEditorModule::FLevelViewportMenuExtender_SelectedActors::
	CreateRaw(this,&FSuperManagerModule::CustomLevelEditorMenuExtender));
}

TSharedRef<FExtender> FSuperManagerModule::CustomLevelEditorMenuExtender(const TSharedRef<FUICommandList> UICommandList, 
const TArray<AActor*> SelectedActors)
{	
	TSharedRef<FExtender> MenuExtender = MakeShareable(new FExtender());
	
	if(SelectedActors.Num()>0)
	{
		MenuExtender->AddMenuExtension(
			FName("ActorOptions"),
			EExtensionHook::Before,
			UICommandList,
			FMenuExtensionDelegate::CreateRaw(this,&FSuperManagerModule::AddLevelEditorMenuEntry)
			);
	}

	return MenuExtender;
}

void FSuperManagerModule::AddLevelEditorMenuEntry(FMenuBuilder & MenuBuilder)
{
	MenuBuilder.AddMenuEntry
	(
		FText::FromString(TEXT("Lock Actor Selection")),
		FText::FromString(TEXT("Prevent actor from being selected")),
		FSlateIcon(FSuperManagerStyle::GetStyleSetName(),"LevelEditor.LockSelection"),
		FExecuteAction::CreateRaw(this,&FSuperManagerModule::OnLockActorSelectionButtonClicked)
	);

	MenuBuilder.AddMenuEntry
	(
		FText::FromString(TEXT("Unlock All Actor Selection")),
		FText::FromString(TEXT("Remove the selection constraint on all actor")),
		FSlateIcon(FSuperManagerStyle::GetStyleSetName(),"LevelEditor.UnlockSelection"),
		FExecuteAction::CreateRaw(this,&FSuperManagerModule::OnUnlockActorSelectionButtonClicked)
	);
}

void FSuperManagerModule::OnLockActorSelectionButtonClicked()
{
	if(!GetEditorActorSubsystem()) return;

	TArray<AActor*> SelectedActors = WeakEditorActorSubsystem->GetSelectedLevelActors();

	if(SelectedActors.Num()==0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("No actor selected"));
		return;
	}

	FString CurrentLockedActorNames = TEXT("Locked selection for:");

	for(AActor* SelectedActor:SelectedActors)
	{
		if(!SelectedActor) continue;

		LockActorSelection(SelectedActor);

		WeakEditorActorSubsystem->SetActorSelectionState(SelectedActor,false);

		CurrentLockedActorNames.Append(TEXT("\n"));
		CurrentLockedActorNames.Append(SelectedActor->GetActorLabel());
	}

	RefreshSceneOutliner();

	DebugHeader::ShowNotifyInfo(CurrentLockedActorNames);
}

void FSuperManagerModule::OnUnlockActorSelectionButtonClicked()
{
	if(!GetEditorActorSubsystem()) return;

	TArray<AActor*> AllActorsInLevel = WeakEditorActorSubsystem->GetAllLevelActors();
	TArray<AActor*> AllLockedActors;

	for(AActor* ActorInLevel:AllActorsInLevel)
	{
		if(!ActorInLevel) continue;

		if(CheckIsActorSelectionLocked(ActorInLevel))
		{
			AllLockedActors.Add(ActorInLevel);
		}
	}

	if(AllLockedActors.Num()==0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("No selection locked actor currently"));
		return;
	}

	FString UnlockedActorNames = TEXT("Lifted selection constraint for:");

	for(AActor* LockedActor:AllLockedActors)
	{
		UnlockActorSelection(LockedActor);

		UnlockedActorNames.Append(TEXT("\n"));
		UnlockedActorNames.Append(LockedActor->GetActorLabel());
	}

	RefreshSceneOutliner();

	DebugHeader::ShowNotifyInfo(UnlockedActorNames);
}

#pragma endregion

#pragma region SelectionLock

void FSuperManagerModule::InitCustomSelectionEvent()
{
	USelection* UserSelection = GEditor->GetSelectedActors();

	UserSelection->SelectObjectEvent.AddRaw(this,&FSuperManagerModule::OnActorSelected);
}

void FSuperManagerModule::OnActorSelected(UObject * SelectedObject)
{	
	if(!GetEditorActorSubsystem()) return;

	if(AActor* SelectedActor = Cast<AActor>(SelectedObject))
	{
		if(CheckIsActorSelectionLocked(SelectedActor))
		{
			//Deselect actor right away
			WeakEditorActorSubsystem->SetActorSelectionState(SelectedActor,false);
		}
	}
}

void FSuperManagerModule::LockActorSelection(AActor * ActorToProcess)
{
	if(!ActorToProcess) return;
	
	if(!ActorToProcess->ActorHasTag(FName("Locked")))
	{
		ActorToProcess->Tags.Add(FName("Locked"));
	}	
}

void FSuperManagerModule::UnlockActorSelection(AActor * ActorToProcess)
{
	if(!ActorToProcess) return;
	
	if(ActorToProcess->ActorHasTag(FName("Locked")))
	{
		ActorToProcess->Tags.Remove(FName("Locked"));
	}
}

bool FSuperManagerModule::CheckIsActorSelectionLocked(AActor * ActorToProcess)
{	
	if(!ActorToProcess) return false;

	return ActorToProcess->ActorHasTag(FName("Locked"));
}

void FSuperManagerModule::RefreshSceneOutliner()
{
	FLevelEditorModule& LevelEditorModule =
	FModuleManager::LoadModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));

	TSharedPtr<ISceneOutliner> SceneOutliner = LevelEditorModule.GetFirstLevelEditor()->GetMostRecentlyUsedSceneOutliner();

	if(SceneOutliner.IsValid())
	{
		SceneOutliner->FullRefresh();
	}
}

#pragma endregion

#pragma region CustomEditorUICommands

void FSuperManagerModule::InitCustomUICommands()
{
	CustomUICommands = MakeShareable(new FUICommandList());

	CustomUICommands->MapAction(
		FSuperManagerUICommands::Get().LockActorSelection,
		FExecuteAction::CreateRaw(this,&FSuperManagerModule::OnSelectionLockHotKeyPressed)
	);

	CustomUICommands->MapAction(
		FSuperManagerUICommands::Get().UnlockActorSelection,
		FExecuteAction::CreateRaw(this,&FSuperManagerModule::OnUnlockActorSelectionHotKeyPressed)
	);
}

void FSuperManagerModule::OnSelectionLockHotKeyPressed()
{
	OnLockActorSelectionButtonClicked();
}

void FSuperManagerModule::OnUnlockActorSelectionHotKeyPressed()
{
	OnUnlockActorSelectionButtonClicked();
}

#pragma endregion

#pragma region SceneOutlinerExtension

void FSuperManagerModule::InitSceneOutlinerColumnExtension()
{	
	FSceneOutlinerModule& SceneOutlinerModule =
	FModuleManager::LoadModuleChecked<FSceneOutlinerModule>(TEXT("SceneOutliner"));

	FSceneOutlinerColumnInfo SelectionLockColumnInfo(
		ESceneOutlinerColumnVisibility::Visible,
		1,
		FCreateSceneOutlinerColumn::CreateRaw(this,&FSuperManagerModule::OnCreateSelectionLockColumn)
	);
	
	SceneOutlinerModule.RegisterDefaultColumnType<FOutlinerSelectionLockColumn>(SelectionLockColumnInfo);
}

TSharedRef<ISceneOutlinerColumn> FSuperManagerModule::OnCreateSelectionLockColumn(ISceneOutliner & SceneOutliner)
{
	return MakeShareable(new FOutlinerSelectionLockColumn(SceneOutliner));
}

void FSuperManagerModule::UnRegisterSceneOutlinerColumnExtension()
{
	FSceneOutlinerModule& SceneOutlinerModule =
	FModuleManager::LoadModuleChecked<FSceneOutlinerModule>(TEXT("SceneOutliner"));

	SceneOutlinerModule.UnRegisterColumnType<FOutlinerSelectionLockColumn>();
}

#pragma endregion

void FSuperManagerModule::ProcessLockingForOutliner(AActor * ActorToProcess, bool bShouldLock)
{	
	if(!GetEditorActorSubsystem()) return;

	if(bShouldLock)
	{
		LockActorSelection(ActorToProcess);

		WeakEditorActorSubsystem->SetActorSelectionState(ActorToProcess,false);

		DebugHeader::ShowNotifyInfo(TEXT("Locked selection for:\n") + ActorToProcess->GetActorLabel());
	}
	else
	{
		UnlockActorSelection(ActorToProcess);

		DebugHeader::ShowNotifyInfo(TEXT("Removed selection lock for:\n") + ActorToProcess->GetActorLabel());
	}
}

bool FSuperManagerModule::GetEditorActorSubsystem()
{	
	if(!WeakEditorActorSubsystem.IsValid())
	{
		WeakEditorActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();
	}

	return WeakEditorActorSubsystem.IsValid();
}

void FSuperManagerModule::ShutdownModule()
{
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(FName("Advance Deletion"));
	FSuperManagerStyle::ShutDown();
	FSuperManagerUICommands::Unregister();
	UnRegisterSceneOutlinerColumnExtension();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSuperManagerModule, SuperManager)