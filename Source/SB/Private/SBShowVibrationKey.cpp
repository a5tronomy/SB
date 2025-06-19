#include "SBShowVibrationKey.h"

USBShowVibrationKey::USBShowVibrationKey() {
    this->VibrationSet = NULL;
    this->PlayTarget = ShowVibrationTarget_MainActor;
    this->HapticFadeOutDuration = 1.00f;
    this->PlayTargetIndex = 0;
    this->bPlayerCharacterOnly = false;
}


