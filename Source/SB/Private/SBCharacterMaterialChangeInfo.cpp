#include "SBCharacterMaterialChangeInfo.h"

FSBCharacterMaterialChangeInfo::FSBCharacterMaterialChangeInfo() {
    this->MaterialIndex = 0;
    this->MeshIndex = 0;
    this->ChangeMaterial = NULL;
    this->CurrentDuration = 0.00f;
    this->Duration = 0.00f;
    this->RemainLoopCount = 0;
}

