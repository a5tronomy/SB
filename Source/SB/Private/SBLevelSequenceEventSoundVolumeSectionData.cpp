#include "SBLevelSequenceEventSoundVolumeSectionData.h"

FSBLevelSequenceEventSoundVolumeSectionData::FSBLevelSequenceEventSoundVolumeSectionData() {
    this->SoundVolumeChannel = ESBSoundVolumeChannel::None;
    this->Volume = 0.00f;
    this->bOverrideFadeTime = false;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
}

