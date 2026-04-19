// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DodgeBallPrototype : ModuleRules
{
	public DodgeBallPrototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"Mover",
            "EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DodgeBallPrototype",
			"DodgeBallPrototype/Variant_Platforming",
			"DodgeBallPrototype/Variant_Platforming/Animation",
			"DodgeBallPrototype/Variant_Combat",
			"DodgeBallPrototype/Variant_Combat/AI",
			"DodgeBallPrototype/Variant_Combat/Animation",
			"DodgeBallPrototype/Variant_Combat/Gameplay",
			"DodgeBallPrototype/Variant_Combat/Interfaces",
			"DodgeBallPrototype/Variant_Combat/UI",
			"DodgeBallPrototype/Variant_SideScrolling",
			"DodgeBallPrototype/Variant_SideScrolling/AI",
			"DodgeBallPrototype/Variant_SideScrolling/Gameplay",
			"DodgeBallPrototype/Variant_SideScrolling/Interfaces",
			"DodgeBallPrototype/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
