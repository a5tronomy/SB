#include "SBShowMaterialCollectionParamKey.h"

USBShowMaterialCollectionParamKey::USBShowMaterialCollectionParamKey() {
    this->MaterialParameterCollection = NULL;
    this->PlayerCharacterCheckTarget = ShowActorTarget_MainActor;
    this->bCurveNormalizedAge = true;
    this->ParamType = Param_float;
    this->bRestoreParamWhenFinished = true;
}


