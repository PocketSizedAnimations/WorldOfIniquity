// Fill out your copyright notice in the Description page of Project Settings.


#include "Editor/DialogueEditor.h"

/*types*/
#include "UObject/NameTypes.h"

/*slate stuff*/
#include "SSingleObjectDetailsPanel.h"
#include "Runtime/Engine/Public/Slate/SceneViewport.h"
#include "GraphEditor.h"
#include "SEditorViewport.h"
#include "WorkspaceMenuStructureModule.h"
#include "Widgets/Docking/SDockTab.h"
#include "Editor/EditorEngine.h"
//#include "DialogueEditorActions.h"
#include "Framework/Commands/GenericCommands.h"
#include "Framework/Commands/UIAction.h"
#include "Framework/Application/SlateApplication.h"

//void DialogueEditor::InitAssetEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, const FName AppIdentifier, const TSharedRef<FTabManager::FLayout>& StandaloneDefaultLayout, const bool bCreateDefaultStandaloneMenu, const bool bCreateDefaultToolbar, UObject* ObjectToEdit, const bool bInIsToolbarFocusable, const bool bInUseSmallToolbarIcons)
//{
//	Super::InitAssetEditor(Mode, InitToolkitHost, AppIdentifier, StandaloneDefaultLayout, bCreateDefaultStandaloneMenu, bCreateDefaultToolbar, ObjectToEdit, bInIsToolbarFocusable, bInUseSmallToolbarIcons);
//}

#define LOCTEXT_NAMESPACE "DialogueEditor"

struct FDialogueEditorTabs
{
	static const FName DetailsID;
	static const FName ViewportID;
};

const FName FDialogueEditorTabs::DetailsID(TEXT("Details"));
const FName FDialogueEditorTabs::ViewportID(TEXT("Viewport"));

FDialogueEditor::FDialogueEditor()
{

}

FDialogueEditor::~FDialogueEditor()
{

}


void FDialogueEditor::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(LOCTEXT("WorkspaceMenu_DialogueEditor", "Dialogue Editor"));
	auto WorkspaceMenuCategoryRef = WorkspaceMenuCategory.ToSharedRef();

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	//InTabManager->RegisterTabSpawner(FDialogueEditorTabs::ViewportID, FOnSpawnTab::CreateSP(this, &FDialogueEditor::SpawnTab_Viewport))
	//	.SetDisplayName(LOCTEXT("ViewportTab", "Viewport"))
	//	.SetGroup(WorkspaceMenuCategoryRef)
	//	.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Viewports"));

	//InTabManager->RegisterTabSpawner(FDialogueEditorTabs::DetailsID, FOnSpawnTab::CreateSP(this, &FDialogueEditor::SpawnTab_Details))
	//	.SetDisplayName(LOCTEXT("DetailsTabLabel", "Details"))
	//	.SetGroup(WorkspaceMenuCategoryRef)
	//	.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));
}

void FDialogueEditor::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost, UObject* InObject)
{
	//Super::InitEditor(Mode, InitToolkitHost, InObject);
	//InitAssetEditor(Mode, InitToolkitHost, "Dialogue Editor", StandaloneDefaultLayout, true, true);
}

FLinearColor FDialogueEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor(78,0,152);
}

FName FDialogueEditor::GetToolkitFName() const
{
	return FName("Dialogue Editor");
}

FText FDialogueEditor::GetBaseToolkitName() const
{
	return FText::FromString("Dialogue");
}

FString FDialogueEditor::GetWorldCentricTabPrefix() const
{
	return FString("Dialogue");
}


TSharedRef<SDockTab> FDialogueEditor::SpawnTab_Viewport(const FSpawnTabArgs& Args)
{
	TSharedPtr<FDialogueEditor> DialogueEditorPtr = SharedThis(this);

	return SNew(SDockTab)
		.Label(LOCTEXT("ViewportTab_Title", "Viewport"))
		//[
			//SAssignNew(DialogueViewportWidget, SDialogueViewportWidget, DialogueEditorPtr)
			//.Dialogue(DialogueBeingEdited)
		//]
	;
}

TSharedRef<SDockTab> FDialogueEditor::SpawnTab_Details(const FSpawnTabArgs& Args)
{
	TSharedPtr<FDialogueEditor> DialogueEditorPtr = SharedThis(this);

	// Spawn the tab
	return SNew(SDockTab)
		/*.Label(LOCTEXT("DetailsTab_Title", "Details"))
		[
			SNew(SDialoguePropertiesTabBody, DialogueEditorPtr)
		]*/;
}

#undef LOCTEXT_NAMESPACE