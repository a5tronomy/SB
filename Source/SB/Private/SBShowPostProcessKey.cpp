#include "SBShowPostProcessKey.h"

USBShowPostProcessKey::USBShowPostProcessKey() {
    this->BlendInTime = 0.15f;
    this->BlendOutTime = 0.15f;
    this->bInfinite = false;
    this->bPlayToMainCharacter = true;
    this->PlayTargetIndex = 0;
    this->bPlayerCharacterOnly = true;
}


