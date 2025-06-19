#include "SBShowMovementBoneKey.h"

USBShowMovementBoneKey::USBShowMovementBoneKey() {
    this->OwnerMeshSlot = ESBMesh_Body;
    this->TargetMeshSlot = ESBMesh_Body;
    this->InterpolationType = ESBMovementBoneInterpType_Linear;
    this->CurveType = ESBMovementBoneCurveType_Linear;
    this->InterpolationTime = 0.00f;
    this->KeepDuration = 0.00f;
    this->SplineComponent = NULL;
}


