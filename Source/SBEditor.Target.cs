using UnrealBuildTool;

public class SBEditorTarget : TargetRules {
	public SBEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"SB",
		});
	}
}
