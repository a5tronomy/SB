#include "SBShowBoneScaleIgnoreKey.h"

USBShowBoneScaleIgnoreKey::USBShowBoneScaleIgnoreKey() {
    this->bPlayToMainCharacter = true;
    this->PlayTargetIndex = 0;
    this->IgnoreBones.AddDefaulted(1);
    this->BlendInTime = 0.10f;
    this->BlendOuTime = 0.10f;
}


