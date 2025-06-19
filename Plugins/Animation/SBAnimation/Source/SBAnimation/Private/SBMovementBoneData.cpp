#include "SBMovementBoneData.h"

FSBMovementBoneData::FSBMovementBoneData() {
    this->InterpType = ESBMovementBoneInterpType_Linear;
    this->CurveType = ESBMovementBoneCurveType_Linear;
    this->ModifyBoneIndex = 0;
    this->InterpolationTime = 0.00f;
    this->CurrentInterpTime = 0.00f;
    this->KeepDuration = 0.00f;
    this->pTargetComponent = NULL;
    this->RestoreAttachComponent = NULL;
}

