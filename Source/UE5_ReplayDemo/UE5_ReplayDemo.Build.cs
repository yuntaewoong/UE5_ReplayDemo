// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_ReplayDemo : ModuleRules
{
	public UE5_ReplayDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
