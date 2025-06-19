using UnrealBuildTool;

public class LowEntryExtendedStandardLibrary : ModuleRules {
    public LowEntryExtendedStandardLibrary(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "SlateCore",
        });
    }
}
