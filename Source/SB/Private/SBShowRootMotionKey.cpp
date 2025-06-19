#include "SBShowRootMotionKey.h"

USBShowRootMotionKey::USBShowRootMotionKey() {
    this->Priority = 0;
    this->Target = ShowActorTarget_MainActor;
    this->PlayTargetIndex = 0;
    this->TranslationCurve = NULL;
    this->RotationCurve = NULL;
}


