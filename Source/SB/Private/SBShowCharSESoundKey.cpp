#include "SBShowCharSESoundKey.h"

USBShowCharSESoundKey::USBShowCharSESoundKey() {
    this->bUseCharacterSoundSet = true;
    this->CharacterHitType = ESBHitSound_Common;
    this->TargetForCharacterVoice = ShowCharParticleTarget_MainActor;
    this->TargetIndexForCharacterVoice = 0;
    this->SESoundAttachType = ESBShowSESoundAttachType::SESoundSetTarget;
}


