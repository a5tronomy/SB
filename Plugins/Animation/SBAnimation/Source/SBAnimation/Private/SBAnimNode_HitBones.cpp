#include "SBAnimNode_HitBones.h"

FSBAnimNode_HitBones::FSBAnimNode_HitBones() {
    this->HitForceFallOffValue = 0.00f;
    this->bUseHitForceFallOffCurve = false;
    this->HitForceFallOffCurve = NULL;
    this->bUseShakeNoise = false;
    this->ShakeNoiseMode = SBBoneHitShake_MulOffset;
    this->HitTranslationScale = 0.00f;
    this->HitRotationScale = 0.00f;
    this->CacheSkeleton = NULL;
}

