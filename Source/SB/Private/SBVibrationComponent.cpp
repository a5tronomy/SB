#include "SBVibrationComponent.h"

USBVibrationComponent::USBVibrationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VibrationSet = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bAllowSpatialization = true;
    this->HapticAttenuationSetting = NULL;
    this->IntensityMultiplier = 1.00f;
    this->ForceFeedbackLooping = false;
    this->ForceFeedbackAttenuation = NULL;
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = true;
    this->HapticComponent = NULL;
    this->ForceFeedbackComponent = NULL;
}

void USBVibrationComponent::SubscribeSoundParam(const TArray<ESBSoundParamType>& InSoundParamTypes) {
}

void USBVibrationComponent::Stop() {
}

void USBVibrationComponent::SetWaveParameter(FName InName, USoundWave* InWave) {
}

void USBVibrationComponent::SetVibration(USBVibrationSet* NewVibrationSet) {
}

void USBVibrationComponent::SetIntParameter(FName InName, int32 inInt) {
}

void USBVibrationComponent::SetFloatParameter(FName InName, float InFloat) {
}

void USBVibrationComponent::SetBoolParameter(FName InName, bool InBool) {
}

void USBVibrationComponent::Play(float StartTime) {
}

bool USBVibrationComponent::IsPlaying() const {
    return false;
}

void USBVibrationComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve) {
}

void USBVibrationComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve) {
}


