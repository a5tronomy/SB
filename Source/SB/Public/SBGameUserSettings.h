#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ESBAspectRatio.h"
#include "ESBFrameLimit.h"
#include "ESBGameOptionAudioDeviceType.h"
#include "ESBGameOptionHUDSizeType.h"
#include "ESBGameUserSettingsQuality.h"
#include "SBGameUserSettings.generated.h"

UCLASS()
class SB_API USBGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> EnviromentObjectDetail;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> CharacterObjectDetail;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> EnviromentTextures;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> CharacterTextures;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> VolumetricFog;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> ShadowQuality;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> EffectQuality;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> EnvironmentQuality;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> Lighting;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> FoliageQuality;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> AmbientOcclusion;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> DepthOfField;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> ScreenSpaceReflection;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> SceneColorFringeQuality;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> GrainQuality;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> MaterialQuality;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> AntiAliasing;
    
    UPROPERTY(Config)
    float ResolutionScale;
    
    UPROPERTY(Config)
    float Sharpen;
    
    UPROPERTY(Config)
    float SharpenDLSS;
    
    UPROPERTY(Config)
    float SharpenFSR3;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> NvidiaDLSS;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> NvidiaFrameGeneration;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> NvidiaReflexLowLatency;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> AmdFSR3;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> AmdFrameInterpolation;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> IntelXeSS;
    
    UPROPERTY(Config)
    ESBAspectRatio AspectRatio;
    
    UPROPERTY(Config)
    ESBGameOptionAudioDeviceType AudioDeviceType;
    
    UPROPERTY(Config)
    float HDRBrightness;
    
    UPROPERTY(Config)
    float HDRContrast;
    
    UPROPERTY(Config)
    float HDRUILevel;
    
    UPROPERTY(Config)
    float Gamma;
    
    UPROPERTY(Config)
    float SoundSEVolume;
    
    UPROPERTY(Config)
    float SoundDialogVolume;
    
    UPROPERTY(Config)
    float SoundBGMVolume;
    
    UPROPERTY(Config)
    float SoundMasterVolume;
    
    UPROPERTY(Config)
    ESBFrameLimit FrameLimit;
    
    UPROPERTY(Config)
    ESBGameOptionHUDSizeType HUDSizeType;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> HUDBGActive;
    
    UPROPERTY(Config)
    int32 HUDAspect;
    
    UPROPERTY(Config)
    int32 SubTitleSizeValue;
    
    UPROPERTY(Config)
    int32 SubTitleBGValue;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> UMPCMode;
    
    UPROPERTY(Config)
    int32 GpuDeviceID;
    
    UPROPERTY(Config)
    FString MonitorID;
    
    UPROPERTY(Config)
    bool bFirstRun;
    
    UPROPERTY(Config)
    bool bHDDMode;
    
    UPROPERTY(Config)
    bool bVSync;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> AnimationQuality;
    
    UPROPERTY(Config)
    float CharacterViewDistance;
    
    UPROPERTY(Config)
    float EnviromentObjectViewDistance;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> UpscalerType;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> SavedNvidiaFrameGeneration;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> SavedNvidiaReflexLowLatency;
    
    UPROPERTY(Config)
    TEnumAsByte<ESBGameUserSettingsQuality> SavedAmdFrameInterpolation;
    
public:
    USBGameUserSettings();

};

