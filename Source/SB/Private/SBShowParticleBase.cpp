#include "SBShowParticleBase.h"

USBShowParticleBase::USBShowParticleBase() {
    this->bUseSocketScale = false;
    this->bImmediatelyDestroy = false;
    this->bAttach = false;
    this->bFollowing = false;
    this->bFollowSpring = false;
    this->FollowingStiffness = 0.00f;
    this->FollowingDamping = 0.00f;
    this->bPosOnly = false;
    this->RelativeLocationAxis = ESBParticleRelativeAxis::Default;
    this->RelativeRotationAxis = ESBParticleRelativeAxis::Default;
    this->ParticleScale = 1.00f;
    this->bUseCharacterParticleScale = true;
    this->bUseCharParticleScaleToRelativeLoc = true;
    this->Target = ShowParticleTarget_MainActor;
    this->TargetIndex = 0;
    this->bUseTargetEquipment = false;
    this->TargetEquipment = EquipmentType_Weapon;
    this->bUseTargetComponentTag = false;
    this->IsTickableWhenPaused = false;
    this->bEnableRelativeLocationCurve = false;
    this->bEnableRelativeRotationCurve = false;
    this->bEnableParticleScaleCurve = false;
    this->bEnableRandomLocation = false;
}


