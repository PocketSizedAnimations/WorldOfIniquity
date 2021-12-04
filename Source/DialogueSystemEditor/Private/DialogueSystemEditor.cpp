// Fill out your copyright notice in the Description page of Project Settings.

#include "DialogueSystemEditor.h"
#include "Logging.h"

/*assets*/
#include "AssetToolsModule.h"
#include "DialogueFactory.h"

/*modules*/
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FDialogueSystemEditor"

uint32 FDialogueSystemEditor::EditorAssetCategory;

void FDialogueSystemEditor::StartupModule()
{
	/*configures custom Dialogue asset for showing up in Context Menu*/
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	{
		/*register a new category && store its id for use - this line ultimately is what CREATES the context category when right clicking*/
		EditorAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Dialogue")), LOCTEXT("DialogueSystemCategory", "Dialogue"));
		
		/*register the "action" associated with our new Dialogue type - ultimately provides the editor with info on how to create a context option for the category above us*/
		TSharedRef<IAssetTypeActions> Action = MakeShareable(new FDialogueAssetTypeActions(EditorAssetCategory));
		AssetTools.RegisterAssetTypeActions(Action);
	}

	/**/
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	

	//PropertyModule.RegisterCustomClassLayout("Dialogue", FOnGetDetailCustomizationInstance::CreateStatic(&FDialoguePluginEditorSettingsDetails::MakeInstance));
	PropertyModule.NotifyCustomizationModuleChanged();
}

void FDialogueSystemEditor::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDialogueSystemEditor, DialogueSystemEditor);