#include "SBProjectileUpdateInfo.h"

FSBProjectileUpdateInfo::FSBProjectileUpdateInfo() {
    this->Speed = 0.00f;
    this->SpeedRandom = 0.00f;
    this->Accelation = 0.00f;
    this->MinSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->bSpeedFromDuration = false;
    this->MovementCurveRepeatDistance = 0.00f;
    this->MovementCurveScaleDistance = 0.00f;
    this->MovementCurveType = ESBMovementCurve_None;
    this->bAutoGenerationMovementCurve = false;
    this->bMovementCurveAxisPlane = false;
    this->MovementCurve = NULL;
    this->FixedLocationTime = 0.00f;
    this->FixedLocationRemainingDistance = 0.00f;
    this->FixedLocationAdditiveForwardDistance = 0.00f;
    this->Gravity = 0.00f;
    this->SpeedFromMinDistance = 0.00f;
    this->SpeedFromMaxDistance = 0.00f;
    this->ParabolicMotionXYSpeedPerSecond = 0.00f;
    this->bAdditiveLocationByTargetVelocity = false;
    this->AdditiveDestTargetForwardDistanceWhenVelocityMove = 0.00f;
    this->RotationMinDistancePowerWhenGuidedMissile = 0.00f;
    this->RotationMaxDistancePowerWhenGuidedMissile = 0.00f;
    this->RotationMinDistanceWhenGuidedMissile = 0.00f;
    this->RotationMaxDistanceWhenGuidedMissile = 0.00f;
    this->RandomVelocityMinWhenGuidedMissile = 0.00f;
    this->RandomVelocityMaxWhenGuidedMissile = 0.00f;
    this->RandomYawMinWhenGuidedMissile = 0.00f;
    this->RandomYawMaxWhenGuidedMissile = 0.00f;
    this->RandomPitchMinWhenGuidedMissile = 0.00f;
    this->RandomPitchMaxWhenGuidedMissile = 0.00f;
    this->bBeamTracking = false;
    this->BeamTrackingStartTime = 0.00f;
    this->BeamTrackingBlendInTime = 0.00f;
    this->BeamTrackingEndTime = 0.00f;
    this->BeamTrackingBlendOutTime = 0.00f;
    this->BeamTrackingTargetDistacne = 0.00f;
    this->bBeamTrackingTargetFollow = false;
    this->BeamFixedDistance = 0.00f;
}

