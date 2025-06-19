#include "SBShowWindVolumeKey.h"

USBShowWindVolumeKey::USBShowWindVolumeKey() {
    this->Target = ShowActorTarget_MainActor;
    this->StrengthMultiplier = 1.00f;
    this->ClothWindMultiplier = 0.50f;
    this->SkeletalMeshForceMultiplier = 500.00f;
    this->KawaiiPhysicsForceMultiplier = 10.00f;
    this->DirectionType = ESBShowWindVolumeDirectionType::World;
    this->bKeepTrackLocalDirection = false;
    this->bPlayerOnly = false;
    this->FadeDuration = 0.00f;
    this->Priority = 0;
    this->bRandomizeDirection = false;
    this->MinAzimuthalAngle = 0.00f;
    this->MaxAzimuthalAngle = 360.00f;
    this->MinPolarAngle = 0.00f;
    this->MaxPolarAngle = 90.00f;
}


