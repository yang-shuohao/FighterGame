// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FighterGame : ModuleRules
{
	public FighterGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
