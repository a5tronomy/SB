#include "SBZoneEnvMovementComponent.h"

USBZoneEnvMovementComponent::USBZoneEnvMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementMode = MOVE_Falling;
    this->MaxSpeed = 200.00f;
    this->bUseAcceleration = true;
    this->Acceleration = 100.00f;
    this->NonAccelSpeedArriveTime = 0.50f;
    this->NonAccelSpeedEasingFunc = EEasingFunc::EaseIn;
    this->Deceleration = 400.00f;
    this->TurningBoost = 8.00f;
    this->SlideBlockingZDist = 0.01f;
    this->IncorrectMoveDist = 20.00f;
    this->bQueryTraceComplex = false;
    this->MinFloorDist = 2.00f;
    this->MaxFloorDist = 6.00f;
    this->CollisionExtendOffset = 1.00f;
    this->MaxFloorZ = 0.71f;
    this->bConformToSlope = true;
    this->MaxStepHeight = 10.00f;
    this->TraceDownScale = 0.90f;
    this->bHasGravity = true;
    this->bPositionCorrected = false;
    this->NonAccelCurrArriveTime = 0.00f;
    this->bHoldMove = false;
    this->AngularDistance = 0.00f;
    this->bCheckPenetratingZ = false;
    this->RemainGrabDeactiveCount = 0;
    this->bMovementWalked = false;
}

FVector USBZoneEnvMovementComponent::GetPendingInputVector() const {
    return FVector{};
}

FVector USBZoneEnvMovementComponent::GetLastInputVector() const {
    return FVector{};
}

FVector USBZoneEnvMovementComponent::ConsumeInputVector() {
    return FVector{};
}

void USBZoneEnvMovementComponent::AddInputVector(FVector WorldVector, FVector LocalVector, bool bForce) {
}


