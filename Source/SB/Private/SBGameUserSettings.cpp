#include "SBGameUserSettings.h"

USBGameUserSettings::USBGameUserSettings() {
    this->bUseVSync = true;
    this->EnviromentObjectDetail = SB_GAMEUSERSETTINGS_HIGH;
    this->CharacterObjectDetail = SB_GAMEUSERSETTINGS_HIGH;
    this->EnviromentTextures = SB_GAMEUSERSETTINGS_VERYHIGH;
    this->CharacterTextures = SB_GAMEUSERSETTINGS_VERYHIGH;
    this->VolumetricFog = SB_GAMEUSERSETTINGS_HIGH;
    this->ShadowQuality = SB_GAMEUSERSETTINGS_EXTENSION1;
    this->EffectQuality = SB_GAMEUSERSETTINGS_HIGH;
    this->EnvironmentQuality = SB_GAMEUSERSETTINGS_HIGH;
    this->Lighting = SB_GAMEUSERSETTINGS_HIGH;
    this->FoliageQuality = SB_GAMEUSERSETTINGS_HIGH;
    this->AmbientOcclusion = SB_GAMEUSERSETTINGS_HIGH;
    this->DepthOfField = SB_GAMEUSERSETTINGS_VERYHIGH;
    this->ScreenSpaceReflection = SB_GAMEUSERSETTINGS_HIGH;
    this->SceneColorFringeQuality = SB_GAMEUSERSETTINGS_LOW;
    this->GrainQuality = SB_GAMEUSERSETTINGS_OFF;
    this->MaterialQuality = SB_GAMEUSERSETTINGS_MEDIUM;
    this->AntiAliasing = SB_GAMEUSERSETTINGS_MEDIUM;
    this->ResolutionScale = 100.00f;
    this->Sharpen = 0.00f;
    this->SharpenDLSS = 0.10f;
    this->SharpenFSR3 = 0.30f;
    this->NvidiaDLSS = SB_GAMEUSERSETTINGS_MEDIUM;
    this->NvidiaFrameGeneration = SB_GAMEUSERSETTINGS_OFF;
    this->NvidiaReflexLowLatency = SB_GAMEUSERSETTINGS_LOW;
    this->AmdFSR3 = SB_GAMEUSERSETTINGS_OFF;
    this->AmdFrameInterpolation = SB_GAMEUSERSETTINGS_OFF;
    this->IntelXeSS = SB_GAMEUSERSETTINGS_OFF;
    this->AspectRatio = ESBAspectRatio::AspectRatio_Auto;
    this->AudioDeviceType = ESBGameOptionAudioDeviceType::Auto;
    this->HDRBrightness = 0.00f;
    this->HDRContrast = 0.00f;
    this->HDRUILevel = 0.00f;
    this->Gamma = 2.20f;
    this->SoundSEVolume = 1.00f;
    this->SoundDialogVolume = 1.00f;
    this->SoundBGMVolume = 1.00f;
    this->SoundMasterVolume = 1.00f;
    this->FrameLimit = ESBFrameLimit::FrameLimit_60;
    this->HUDSizeType = ESBGameOptionHUDSizeType::Medium;
    this->HUDBGActive = SB_GAMEUSERSETTINGS_OFF;
    this->HUDAspect = 0;
    this->SubTitleSizeValue = 1;
    this->SubTitleBGValue = 0;
    this->UMPCMode = SB_GAMEUSERSETTINGS_OFF;
    this->GpuDeviceID = 8714;
    this->MonitorID = TEXT("MONITOR\\HSNFFFF\\{4d36e96e-e325-11ce-bfc1-08002be10318}\\0002");
    this->bFirstRun = false;
    this->bHDDMode = true;
    this->bVSync = true;
    this->AnimationQuality = SB_GAMEUSERSETTINGS_HIGH;
    this->CharacterViewDistance = 1.00f;
    this->EnviromentObjectViewDistance = 1.00f;
    this->UpscalerType = SB_GAMEUSERSETTINGS_LOW;
    this->SavedNvidiaFrameGeneration = SB_GAMEUSERSETTINGS_OFF;
    this->SavedNvidiaReflexLowLatency = SB_GAMEUSERSETTINGS_OFF;
    this->SavedAmdFrameInterpolation = SB_GAMEUSERSETTINGS_OFF;
}


