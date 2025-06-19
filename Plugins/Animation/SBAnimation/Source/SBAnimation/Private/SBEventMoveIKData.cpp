#include "SBEventMoveIKData.h"

FSBEventMoveIKData::FSBEventMoveIKData() {
    this->bOverrideData = false;
    this->bUseCached = false;
    this->bEnable = false;
    this->ForwardTraceLength = 0.00f;
    this->BackTraceLength = 0.00f;
    this->TraceDirectionType = ESBAnimTraceDir_Forward;
    this->CollisionChannel = ECC_WorldStatic;
    this->TraceType = ESBCollisionShapeType_None;
    this->OffsetBlendTime = 0.00f;
    this->UpdateDistance = 0.00f;
    this->FreezeDuration = 0.00f;
    this->bApplyFreeze = false;
    this->ApplyDuration = 0.00f;
}

