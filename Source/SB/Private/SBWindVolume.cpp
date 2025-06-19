#include "SBWindVolume.h"

ASBWindVolume::ASBWindVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bEnable = true;
    this->bPlayerOnly = false;
    this->bRandomizeDirection = false;
    this->MinAzimuthalAngle = 0.00f;
    this->MaxAzimuthalAngle = 360.00f;
    this->MinPolarAngle = 0.00f;
    this->MaxPolarAngle = 90.00f;
    this->Strength = NULL;
    this->StrengthMultiplier = 1.00f;
    this->ClothWindMultiplier = 0.50f;
    this->KawaiiPhysicsMultiplier = 10.00f;
    this->SkeletalMeshForceMultiplier = 500.00f;
    this->FadeDuration = 0.00f;
    this->Priority = 0;
}


