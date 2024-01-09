// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetActions/QuickAssetAction.h"
#include "DebugHeader.h"
#include "EditorUtilityLibrary.h"
#include "EditorAssetLibrary.h"
#include "ObjectTools.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"

void UQuickAssetAction::DuplicateAsset(int32 NumOfDuplicates)
{
	if(NumOfDuplicates <= 0)
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok, TEXT("请输入有效数字"));
		return;
	}

	TArray<FAssetData> SelectedAssetsDatas = UEditorUtilityLibrary::GetSelectedAssetData();
	uint32 Counter = 0;
	for (const FAssetData& SelectedAssetData : SelectedAssetsDatas)
	{
		for (int32 i = 0; i < NumOfDuplicates; i++)
		{
			//获取资产的路径、复制资产的新名字，以及复制资产的新路径
			const FString SourceAssetPath = SelectedAssetData.GetSoftObjectPath().ToString();
			const FString NewDuplicateAssetName = SelectedAssetData.AssetName.ToString() + TEXT("_") + FString::FromInt(i + 1);
			const FString NewPathName = FPaths::Combine(SelectedAssetData.PackagePath.ToString(), NewDuplicateAssetName);
			//执行资产复制操作
			if(UEditorAssetLibrary::DuplicateAsset(SourceAssetPath, NewPathName))
			{
				//保存复制的资产
				UEditorAssetLibrary::SaveAsset(NewPathName, false);
				++Counter;
			}
		}
	}

	if(Counter > 0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("完成复制") + FString::FromInt(Counter) + TEXT("个文件"));
	}
}

void UQuickAssetAction::AddPrefixes()
{
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();
	uint32 Counter = 0;

	for(UObject* SelectedObject : SelectedObjects)
	{
		if(!SelectedObject) continue;

		FString* PrefixFound = PrefixMap.Find(SelectedObject->GetClass());

		if(!PrefixFound || PrefixFound->IsEmpty())
		{
			DebugHeader::Print(TEXT("找不到该类的前缀") + SelectedObject->GetClass()->GetName(), FColor::Red);
			continue;
		}

		FString OldName = SelectedObject->GetName();

		//该类资产已包含前缀
		if(OldName.StartsWith(*PrefixFound))
		{
			DebugHeader::Print(TEXT("已包含需要添加的前缀") + SelectedObject->GetClass()->GetName(), FColor::Red);
			continue;
		}

		//为MI删除自带前后缀
		if(SelectedObject->IsA<UMaterialInstanceConstant>())
		{
			OldName.RemoveFromStart(TEXT("M_"));
			OldName.RemoveFromEnd("_Inst");
		}
		const FString NewNameWithPrefix = *PrefixFound + OldName;

		//进行重命名
		UEditorUtilityLibrary::RenameAsset(SelectedObject, NewNameWithPrefix);

		++Counter;
	}

	if(Counter > 0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("成功重命名") + FString::FromInt(Counter) + TEXT("个文件"));
	}
}

void UQuickAssetAction::RemoveUnusedAssets()
{
	TArray<FAssetData> SelectedAssetsDatas = UEditorUtilityLibrary::GetSelectedAssetData();
	TArray<FAssetData> UnusedAssetsDatas;

	FixUpRedirectors();

	for (const FAssetData& SelectedAssetData : SelectedAssetsDatas)
	{
		TArray<FString> AssetRefrencers = UEditorAssetLibrary::FindPackageReferencersForAsset(SelectedAssetData.GetSoftObjectPath().ToString());

		if(AssetRefrencers.Num() == 0)
		{
			UnusedAssetsDatas.Add(SelectedAssetData);
		}
	}

	if(UnusedAssetsDatas.Num() == 0)
	{
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok,TEXT("选中项里未找到没有未被使用的资产"), false);
		return;
	}

	//使用ObjectTools删除未被使用的资产
	int32 NumOfAssetsDeleted = ObjectTools::DeleteAssets(UnusedAssetsDatas);

	if(NumOfAssetsDeleted > 0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("成功删除了") + FString::FromInt(NumOfAssetsDeleted) + TEXT("个文件"));
	}
}

void UQuickAssetAction::FixUpRedirectors()
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
