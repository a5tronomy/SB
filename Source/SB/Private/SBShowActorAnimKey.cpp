#include "SBShowActorAnimKey.h"

USBShowActorAnimKey::USBShowActorAnimKey() {
    this->bUseMeshSlot = false;
    this->MeshSlot = ESBMesh_Num;
    this->PlayRate = 1.00f;
    this->PlayStartTime = 0.00f;
    this->PlayEndTime = -1.00f;
    this->Target = ShowActorTarget_MainActor;
    this->TargetIndex = 0;
    this->PlayBlendInTime = 0.00f;
    this->PlayBlendOutTime = 0.10f;
    this->bPlayLoop = false;
    this->LoopCount = -1;
    this->Priority = 100.00f;
    this->bIgnoreStopAnimationWhenEnd = false;
    this->bClearAllAnim = false;
}


