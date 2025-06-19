#include "SBItemBulletTableProperty.h"

FSBItemBulletTableProperty::FSBItemBulletTableProperty() {
    this->ID = 0;
    this->bTPSAimSlowDown = false;
    this->TPS_TargetCheckCollisionRadius = 0.00f;
    this->TPS_ControllerYawDegree = 0.00f;
    this->TPS_ControllerPitchDegree = 0.00f;
    this->TPS_EnableDamping = false;
    this->TPS_DampingForce = 0.00f;
    this->TPS_BulletMagnetismDegree = 0.00f;
    this->bAimLockOnTarget = false;
    this->AimLockOnTargetMaxCount = 0;
    this->AimLockOnTargetOverlapCount = 0;
    this->bHideWeakPoint = false;
}

