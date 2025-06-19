#include "SBShowDynamicPhysicBonesKey.h"

USBShowDynamicPhysicBonesKey::USBShowDynamicPhysicBonesKey() {
    this->bPlayToMainCharacter = true;
    this->PlayTargetIndex = 0;
    this->PhysicBlendWeight = 1.00f;
    this->PhysicBlendInTime = 0.10f;
    this->PhysicBlendOutTime = 0.10f;
    this->PhysicDuration = 1.00f;
    this->PhysicHitPower = 2000.00f;
    this->PhysicHitType = ESBPhysicHitType_AddForceDir;
    this->bSetAllBodiesBelowFromDynamicPhysBones = false;
}


