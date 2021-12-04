// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDialogueSystemEditor : public IModuleInterface
{
public:

	/*category assigned during initialization that represents a custom category*/
	static uint32 EditorAssetCategory;


	//===============================================================
	//===========================FUNCTIONS===========================
	//===============================================================

	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;
	
};
