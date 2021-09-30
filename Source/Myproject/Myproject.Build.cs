// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Myproject : ModuleRules
{
	public Myproject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay","KBEnginePlugins"});
	}
}
