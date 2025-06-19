using UnrealBuildTool;

public class SB : ModuleRules {
    public SB(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ApexDestruction",
            "CableComponent",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "Foliage",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "Niagara",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "SBAnimation",
            "SignificanceManager",
            "SlateCore",
            "UMG",
        });
    }
}
