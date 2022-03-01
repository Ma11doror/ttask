// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ttask_m_t : ModuleRules
{
	public ttask_m_t(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayAbilities", "GameplayTags", "GameplayTasks" });
		//PrivateDependencyModuleNames.AddRange(new string[] {});
	}
}
