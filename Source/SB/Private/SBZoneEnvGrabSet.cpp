#include "SBZoneEnvGrabSet.h"

USBZoneEnvGrabSet::USBZoneEnvGrabSet() {
    this->MaxSpeed = 100.00f;
    this->bUseAcceleration = false;
    this->Acceleration = 100.00f;
    this->NonAccelSpeedArriveTime = 0.50f;
    this->NonAccelSpeedEasingFunc = EEasingFunc::EaseIn;
    this->Deceleration = 4000.00f;
    this->RotationLerpAlpha = 0.03f;
    this->ObjectPivotRotationLerpAlpha = 0.25f;
    this->UngrabClearVelocity = true;
    this->GrabCheckMaxDist = 80.00f;
    this->BlendSpace = NULL;
    this->AnimMaxSpeed = 400.00f;
    this->AnimSpeedUseAccelation = false;
    this->AnimSpeedAccelCurve = NULL;
    this->CurveGrabIKStart = NULL;
    this->BlockMoveTransitStartDuration = 0.00f;
    this->CurveGrabIKEnd = NULL;
    this->BlockMoveTransitEndDuration = 0.00f;
    this->PenetrationMargin = 1.00f;
}


