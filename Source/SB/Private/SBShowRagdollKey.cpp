#include "SBShowRagdollKey.h"

USBShowRagdollKey::USBShowRagdollKey() {
    this->BoneName = TEXT("Bip001");
    this->LockBodyLocationType = ESBRagdollLockLocationType::None;
    this->bStopWhenZeroVelocity = false;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->bDisableGravity = false;
    this->bUseMassScale = false;
    this->bEnablePhysicsBodyCollision = true;
    this->CapsuleComponentFollowingSocketName = TEXT("Bip001-Pelvis");
    this->PoseSnapshotDelayTime = 0.00f;
    this->bUseImpulse = false;
    this->ImpulseDelayTime = 0.00f;
    this->bOverrideHitBone = false;
    this->ImpulsePower = 1000.00f;
    this->DirectionType = ESBShowRagdollDirectionType::Static;
    this->AdditiveDirectionPercent = 0.00f;
    this->bCheckAdditiveDirectionNearlyParallel = false;
    this->AdditiveDirectionType = ESBShowRagdollDirectionType::Static;
    this->bAdditiveDirectionWhenNotStatic = false;
    this->ImpulseLimitVelocity = 0.00f;
    this->bUseForce = false;
    this->Target = ShowActorTarget_MainActor;
    this->PlayTargetIndex = 0;
    this->bIgnorePlayer = true;
}


