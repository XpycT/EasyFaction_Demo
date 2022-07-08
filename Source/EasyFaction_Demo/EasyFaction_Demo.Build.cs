// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EasyFaction_Demo : ModuleRules
{
	public EasyFaction_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "FactionsRuntime" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
