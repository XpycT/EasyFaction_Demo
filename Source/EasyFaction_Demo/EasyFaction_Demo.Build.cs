// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EasyFaction_Demo : ModuleRules
{
	public EasyFaction_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
