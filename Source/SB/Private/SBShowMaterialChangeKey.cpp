#include "SBShowMaterialChangeKey.h"

USBShowMaterialChangeKey::USBShowMaterialChangeKey() {
    this->bUseMaterialArray = false;
    this->pMaterial = NULL;
    this->ApplyMeshIndex = ESBMesh_Body;
    this->ApplyMaterialIndex = -1;
    this->LoopCount = 1;
    this->Target = MovementTarget_MainActor;
    this->TargetIndex = 0;
}


