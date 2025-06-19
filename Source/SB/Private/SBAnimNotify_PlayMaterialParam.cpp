#include "SBAnimNotify_PlayMaterialParam.h"

USBAnimNotify_PlayMaterialParam::USBAnimNotify_PlayMaterialParam() {
    this->ParamType = Param_none;
    this->Duration = 0.00f;
    this->LoopCount = 1;
    this->ApplyMaterialIndex = -1;
    this->MeshSlotIndex = ESBMesh_Body;
}


