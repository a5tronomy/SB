#include "SBShowSoundKey.h"

USBShowSoundKey::USBShowSoundKey() {
    this->Sound = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->TargetForSoundOwner = ESBShowSoundOwnerTarget::Auto;
    this->TargetIndexForSoundOwner = 0;
    this->SoundClassOverride = NULL;
    this->AttenuationOverride = NULL;
    this->bUISound = false;
    this->bMuteWhenGamePause = false;
    this->bFollow = false;
    this->bUseStopAtEnd = false;
    this->StopAtEndFadeOutTime = 0.00f;
    this->bPlayToMainCharacter = true;
    this->PlayTargetIndex = 0;
    this->RelativeLocationAxis = ESBSoundRelativeAxis::Default;
    this->Target = ShowSoundTarget_MainActor;
    this->TargetIndex = 0;
    this->bUseTargetEquipment = false;
    this->TargetEquipment = EquipmentType_Weapon;
    this->bUseCharacterSoundSet = false;
    this->bUseCharacterParticleSet = false;
    this->TargetForCharacterParticle = ShowCharParticleTarget_MainActor;
    this->TargetIndexForCharacterParticle = 0;
    this->bUseAsyncLoading = true;
}


