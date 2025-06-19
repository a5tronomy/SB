#include "SBShowParticleKey.h"

USBShowParticleKey::USBShowParticleKey() {
    this->CustomTimeDilation = 0.00f;
    this->bCastShadow = false;
    this->bReceivesDecals = false;
    this->TranslucencySortPriority = 0;
    this->bUseCharacterParticleSet = false;
    this->bParticleSetWithoutSound = false;
    this->TargetForCharacterPaticle = ShowCharParticleTarget_MainActor;
    this->TargetIndexForCharacterPaticle = 0;
    this->bUsePhysParticle = false;
    this->bPlayPhysParticleOnHitLocation = false;
    this->bPlayOnlyPhysParticleOnHit = true;
    this->PhysCheckDirectionType = ESBShowParticlePhysCheckDirectionType::DownVector;
    this->PhysTraceDistacne = 1000.00f;
    this->PhysTraceStartZSubLength = 50.00f;
    this->PhysParticleSet = NULL;
    this->bDeactiveWhenAttachHidden = false;
    this->AffectFootstepSurfaceVolume = false;
    this->PlayVibrationOnlyLocalPlayer = true;
    this->TargetForVibration = ShowVibrationTarget_OtherActor;
    this->TargetIndexForVibration = 0;
    this->TargetForSoundOwner = ESBShowSoundOwnerTarget::Auto;
    this->TargetIndexForSoundOwner = 0;
    this->bSoundOnHitActorWhenFailedToFindHitLocation = false;
    this->bOnGround = false;
    this->OnGroundTraceDistacne = 1000.00f;
    this->OnGroundTraceStartZSubLength = 200.00f;
    this->OnGroundZOffset = 0.00f;
    this->bUseActorParameter = false;
    this->FrameDelay = 0;
    this->PhotoModeShowHiddenFlag = ESBPhotoModeShowHiddenFlag::None;
}


