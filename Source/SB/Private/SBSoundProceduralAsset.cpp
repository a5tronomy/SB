#include "SBSoundProceduralAsset.h"

USBSoundProceduralAsset::USBSoundProceduralAsset() {
    this->SoundGroup = SOUNDGROUP_Default;
    this->Volume = 1.00f;
    this->SoundClassObject = NULL;
    this->VirtualizationMode = EVirtualizationMode::Restart;
}


