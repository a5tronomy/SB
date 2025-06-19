#include "SBApplyIKInfo.h"

FSBApplyIKInfo::FSBApplyIKInfo() {
    this->bEnable = false;
    this->ForwardTraceLength = 0.00f;
    this->BackTraceLength = 0.00f;
    this->DirectionType = ESBIKTrace_Forward;
    this->CollisionChannel = ECC_WorldStatic;
    this->ShapeType = ESBCollisionShape_Line;
    this->OffsetBlendTime = 0.00f;
    this->UpdateDistance = 0.00f;
}

