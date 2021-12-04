// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/*asset editor*/
#include "Toolkits/AssetEditorToolkit.h"
#include "WorkflowOrientedApp/WorkflowCentricApplication.h"
#include "EditorUndoClient.h"
#include "Misc/NotifyHook.h"



/**
 * 
 */
class DIALOGUESYSTEMEDITOR_API FDialogueEditor : public FAssetEditorToolkit, public FEditorUndoClient, public FNotifyHook
{

protected:
	TSharedRef<SDockTab> SpawnTab_Viewport(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnTab_Details(const FSpawnTabArgs& Args);

	//===================================================================================================
	//=============================================FUNCTIONS=============================================
	//===================================================================================================
public:
	FDialogueEditor();
	virtual ~FDialogueEditor();

public:
	virtual void RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
	void InitEditor(const EToolkitMode::Type Mode, const TSharedPtr< class IToolkitHost >& InitToolkitHost, UObject* InObject);



	// Inherited via FWorkflowCentricApplication
	virtual FLinearColor GetWorldCentricTabColorScale() const override;

	virtual FName GetToolkitFName() const override;

	virtual FText GetBaseToolkitName() const override;

	virtual FString GetWorldCentricTabPrefix() const override;

};
