#include "SBCharacterMaterialParamInfo.h"

FSBCharacterMaterialParamInfo::FSBCharacterMaterialParamInfo() {
    this->ParamType = Param_none;
    this->CurrentDuration = 0.00f;
    this->Duration = 0.00f;
    this->RemainLoopCount = 0;
    this->MaterialIndex = 0;
    this->MeshIndex = 0;
    this->bRestoreParamWhenFinished = false;
    this->bPause = false;
    this->bParamCurveNormalizedAge = false;
    this->bUpdatedTick = false;
}

