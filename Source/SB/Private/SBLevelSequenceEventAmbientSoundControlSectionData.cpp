#include "SBLevelSequenceEventAmbientSoundControlSectionData.h"

FSBLevelSequenceEventAmbientSoundControlSectionData::FSBLevelSequenceEventAmbientSoundControlSectionData() {
    this->ControlType = ESBAmbientSoundControlType::Enable;
    this->Enable = false;
    this->Priority = 0.00f;
}

