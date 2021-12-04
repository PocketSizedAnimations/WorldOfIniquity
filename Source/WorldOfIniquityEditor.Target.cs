// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class WorldOfIniquityEditorTarget : TargetRules
{
	public WorldOfIniquityEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "WorldOfIniquity", "DialogueSystem", "DialogueSystemEditor" } );
	}
}
