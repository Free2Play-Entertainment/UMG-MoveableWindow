/**
 * Based on Blueprints created by insthync
 * --
 * Copyright (c) 2017 Bay
 * --
 * https://github.com/insthync/UMG-MoveableWindow
*/

using UnrealBuildTool;

public class MoveableUMGWindow : ModuleRules
{
	public MoveableUMGWindow(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"UMG",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
			);
	}
}
