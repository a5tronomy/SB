#include "SBEventMoveData_RopeMoveInfo.h"

FSBEventMoveData_RopeMoveInfo::FSBEventMoveData_RopeMoveInfo() {
    this->AttachedComponent = NULL;
    this->PhysicsControlComponent = NULL;
    this->SubPhysicsControlComponent = NULL;
    this->RopeType = ESBEventMoveRope_TopDown;
    this->RopeCableComponent = NULL;
    this->SubRopeCableComponent = NULL;
    this->CollisionStartCollision = NULL;
    this->CollisionEndCollision = NULL;
    this->StartLeaveDistance = 0.00f;
    this->EndLeaveDistance = 0.00f;
    this->PerSpeed = 0.00f;
    this->AttachedEndForceDirType = CableForce_None;
    this->AttachedEndForceScale = 0.00f;
    this->DetachedEndForceScale = 0.00f;
    this->DetachUpperCableLength = 0.00f;
    this->MovementUpperCableLengthPerDist = 0.00f;
    this->AttachSegmentIndex = 0;
    this->CachedRopeLength = 0.00f;
    this->bUseStartRotation = false;
    this->EnableRope = false;
    this->bAttached = false;
    this->RopeLength = 0.00f;
    this->SubCableLength = 0.00f;
    this->CurrentRopeLength = 0.00f;
    this->bRopeMoving = false;
    this->CurrentAccelTime = 0.00f;
    this->InterpAcceleration = 0.00f;
    this->StopedAcceleration = 0.00f;
    this->InputBlockTime = 0.00f;
    this->TransitAnimBlockTime = 0.00f;
    this->bDoStartTransit = false;
    this->bRopeSwingKeepStarting = false;
    this->RopeSwingStartForceKeepTime = 0.00f;
    this->bRopeTrunStart = false;
    this->bRopeTrunSwing = false;
    this->CurrentAddAnimAlphaValue = 0.00f;
    this->StartLeaveCableSegmentIndex = 0;
    this->EndLeaveCableSegmentIndex = 0;
}

