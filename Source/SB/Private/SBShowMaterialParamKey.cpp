#include "SBShowMaterialParamKey.h"

USBShowMaterialParamKey::USBShowMaterialParamKey() {
    this->bCurveNormalizedAge = true;
    this->ParamType = Param_float;
    this->bUniqueRun = false;
    this->ApplyMeshIndex = ESBMesh_Body;
    this->LoopCount = 1;
    this->bRestoreParamWhenFinished = true;
    this->bForceApplyKeyWhenStoped = false;
    this->Target = MovementTarget_MainActor;
    this->TargetIndex = 0;
    this->bUseTargetEquipment = false;
    this->TargetEquipment = EquipmentType_Weapon;
}


