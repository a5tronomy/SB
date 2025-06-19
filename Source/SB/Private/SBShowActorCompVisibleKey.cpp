#include "SBShowActorCompVisibleKey.h"

USBShowActorCompVisibleKey::USBShowActorCompVisibleKey() {
    this->bVisible = false;
    this->bPropagateToChildren = false;
    this->Target = ShowActorTarget_MainActor;
    this->TargetIndex = 0;
    this->bPreviewOnly = false;
}


