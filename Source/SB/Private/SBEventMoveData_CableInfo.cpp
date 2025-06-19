#include "SBEventMoveData_CableInfo.h"

FSBEventMoveData_CableInfo::FSBEventMoveData_CableInfo() {
    this->AttachCableComponent = NULL;
    this->CollisionCableStartCollision = NULL;
    this->CollisionCableEndCollision = NULL;
    this->CableStartLeaveSegment = 0;
    this->CableEndLeaveSegment = 0;
    this->AttachedEndForceDirType = CableForce_None;
    this->AttachedEndForceScale = 0.00f;
}

