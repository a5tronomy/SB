#include "SBShowAnimByMeshSlotKey.h"

USBShowAnimByMeshSlotKey::USBShowAnimByMeshSlotKey() {
    this->MeshSlot = ESBMesh_Face;
    this->bAbsoluteResourcePath = true;
    this->PlayRate = 1.00f;
    this->PlayStartTime = 0.00f;
    this->PlayEndTime = -1.00f;
    this->Target = ShowActorTarget_MainActor;
    this->TargetIndex = 0;
    this->PlayBlendInTime = 0.00f;
    this->PlayBlendOutTime = 0.10f;
    this->Priority = 100;
    this->bPlayLoop = false;
    this->bIgnoreStopAnimationWhenEnd = false;
    this->bActiveJali = false;
    this->bIgnoreShowAnimAsyncLoadLog = false;
}


