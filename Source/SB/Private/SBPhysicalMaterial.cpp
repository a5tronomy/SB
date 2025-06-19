#include "SBPhysicalMaterial.h"

USBPhysicalMaterial::USBPhysicalMaterial() {
    this->FrictionToSlidingVelocity = 5.00f;
    this->MoveScaleCurveOnSliding = NULL;
    this->bEnableSliding = false;
    this->StartSlidingDegree = 15.00f;
    this->StartSlidingSlipDegree = 30.00f;
    this->SlidingAcceleration = 1200.00f;
    this->SlidingSlipAcceleration = 2000.00f;
    this->bOverrideSlidingSlipStartAnimPath = false;
    this->StartSlidingZ = 0.97f;
    this->StartSlidingSlipZ = 0.87f;
    this->bEnableCameraUnderBoundCollision = false;
    this->bEnableWallRun = false;
    this->bEnableWallRunYawControl = true;
    this->OverrideWallRunJumpScale = -1.00f;
    this->MinDegreeWallRunByNormal = 30.00f;
    this->MaxDegreeWallRunByNormal = 95.00f;
    this->bPhysicalForceInteractionForCharacter = false;
    this->PhysicalForceCenterBone = TEXT("Root");
    this->PhysicalForceDist = 80.00f;
    this->PhysicalForceInteractionMaxCount = 1;
    this->PhysicalForceInteractionActiveDegree = 90.00f;
    this->PhysicalForceScale = 1.15f;
    this->PhysicalForceInterval = 0.00f;
}


