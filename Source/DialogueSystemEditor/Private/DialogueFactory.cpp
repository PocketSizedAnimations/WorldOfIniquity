// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueFactory.h"
#include "DialogueSystem/Public/Dialogue.h"
#include "DialogueSystemEditor/Public/DialogueSystemEditor.h"

/*assets*/
#include "AssetTypeCategories.h" 

/*editor*/
#include "DialogueSystemEditor/Public/Editor/DialogueEditor.h"


#define LOCTEXT_NAMESPACE "DialogueEditor"

UDialogueFactory::UDialogueFactory(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	/*editor-configuration*/
	bCreateNew = true;
	bEditAfterNew = true;
	
	/*the actual class to create*/
	SupportedClass = UDialogue::StaticClass();
}

uint32 UDialogueFactory::GetMenuCategories() const
{
	FDialogueSystemEditor& DialogueSystem = FModuleManager::GetModuleChecked<FDialogueSystemEditor>("DialogueSystemEditor");
	//return DialogueSystem.EditorAssetCategory;
	
	return FDialogueSystemEditor::EditorAssetCategory;
}

FText UDialogueFactory::GetDisplayName() const
{
	return LOCTEXT("DialogueText", "Dialogue");
}

FString UDialogueFactory::GetDefaultNewAssetName()  const
{
	return FString(TEXT("NewDialogue"));
}

UObject* UDialogueFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	/*generate && return the newly created asset*/
	return NewObject<UDialogue>(InParent, InClass, InName, Flags);	
}

#undef LOCTEXT_NAMESPACE


//====================================================================================================================
//==============================================FDialogueAssetTypeAction==============================================
//====================================================================================================================

#define LOCTEXT_NAMESPACE "AssetTypeActions"

FDialogueAssetTypeActions::FDialogueAssetTypeActions()
{
}

FDialogueAssetTypeActions::FDialogueAssetTypeActions(uint32 AssetCategory)
{

}

/* OpenAssetEditor() - determines which editor window is used for this type of asset
* allows us to bring up our "Dialogue Editor"
*
*
*/
void FDialogueAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (UDialogue* Dialogue = Cast<UDialogue>(*ObjIt))
		{
			TSharedRef<FDialogueEditor> NewDialogueEditor(new FDialogueEditor());
			NewDialogueEditor->InitEditor(Mode, EditWithinLevelEditor, Dialogue);
		}
	}
}

#undef LOCTEXT_NAMESPACE