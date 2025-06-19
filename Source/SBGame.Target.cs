using UnrealBuildTool;

public class SBGameTarget : TargetRules {
	public SBGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"SB",
		});
	}
}
