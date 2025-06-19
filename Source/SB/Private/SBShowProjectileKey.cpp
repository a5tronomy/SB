#include "SBShowProjectileKey.h"

USBShowProjectileKey::USBShowProjectileKey() {
    this->EndWaitTime = 0.00f;
    this->bTableProjectileKey = true;
    this->ShotTime = 0.00f;
    this->bWithTarget = false;
    this->StartTarget = ESBProjectileTarget::MainActor;
    this->StartTargetUpdate = MovementTargetUpdate_FirstTime;
    this->StartTargetTransformType = ESBTargetLocationTransformType_Base;
    this->bStartTargetTransformRotation = false;
    this->StartTargetRelativeAxisType = MovementTargetRelativeAxisType_World;
    this->DestTarget = ESBProjectileTarget::MainActor;
    this->DestTargetUpdate = MovementTargetUpdate_FirstTime;
    this->DestTargetTransformType = ESBTargetLocationTransformType_Base;
    this->DestTargetRelativeLocationCurve = NULL;
    this->DestTargetRelativeLocationScaleCurve = NULL;
    this->DestTargetRelativeAxisType = MovementTargetRelativeAxisType_World;
    this->bDestTargetLocationToGround = false;
    this->MovementType = ESBProjectileMovementType::Velocity;
    this->bPrintLog = false;
}


