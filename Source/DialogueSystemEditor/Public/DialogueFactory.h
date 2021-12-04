// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "AssetToolsModule.h"
#include "AssetTypeActions_Base.h"
#include "DialogueSystem/Public/Dialogue.h"
#include "DialogueFactory.generated.h"


/**
 * 
 */
UCLASS()
class DIALOGUESYSTEMEDITOR_API UDialogueFactory : public UFactory
{
	GENERATED_BODY()
public:

	UDialogueFactory(const FObjectInitializer& ObjectInitializer);

	virtual uint32 GetMenuCategories() const override;
	virtual FText GetDisplayName() const override;
	virtual FString GetDefaultNewAssetName() const;
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};


//====================================================================================================================
//==============================================FDialogueAssetTypeAction==============================================
//====================================================================================================================

/** FDialogueAssetTypeAction
 * this class is a helper class used by the editor (and registed in DialogueSystemEditor::StartModule()) to inform the Editor how to handle creating the menu
 * options when right clicking - required to get asset to actually showup
 */
class DIALOGUESYSTEMEDITOR_API FDialogueAssetTypeActions : public FAssetTypeActions_Base
{
private:
	uint32 MyAssetCategory;

public:
	FDialogueAssetTypeActions();
	FDialogueAssetTypeActions(uint32 AssetCategory);


	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "DialogueAssetAction", "Dialogue"); }
	virtual FColor GetTypeColor() const override { return FColor(175, 0, 128); }
	virtual UClass* GetSupportedClass() const override { return UDialogue::StaticClass(); }
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Blueprint; }

	/*modifies which editor is used*/
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

};

