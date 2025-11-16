// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_Proj : ModuleRules
{
	public AI_Proj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"NavigationSystem"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"AI_Proj",
			"AI_Proj/Variant_Platforming",
			"AI_Proj/Variant_Platforming/Animation",
			"AI_Proj/Variant_Combat",
			"AI_Proj/Variant_Combat/AI",
			"AI_Proj/Variant_Combat/Animation",
			"AI_Proj/Variant_Combat/Gameplay",
			"AI_Proj/Variant_Combat/Interfaces",
			"AI_Proj/Variant_Combat/UI",
			"AI_Proj/Variant_SideScrolling",
			"AI_Proj/Variant_SideScrolling/AI",
			"AI_Proj/Variant_SideScrolling/Gameplay",
			"AI_Proj/Variant_SideScrolling/Interfaces",
			"AI_Proj/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
