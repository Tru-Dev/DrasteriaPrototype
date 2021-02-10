// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DrasteriaPrototype : ModuleRules
{
	public DrasteriaPrototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
