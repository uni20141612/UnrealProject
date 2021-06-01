// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SecondProject : ModuleRules
{
	public SecondProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.
			AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" ,"UMG", "Slate", "SlateCore", "AIModule", "GamePlayTasks" });
	}
}
