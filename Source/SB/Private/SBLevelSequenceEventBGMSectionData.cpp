#include "SBLevelSequenceEventBGMSectionData.h"

FSBLevelSequenceEventBGMSectionData::FSBLevelSequenceEventBGMSectionData() {
    this->bPlay = false;
    this->EventID = 0;
    this->Priority = 0.00f;
    this->BGMTrack = NULL;
    this->bUseRemoveTimer = false;
    this->RemoveTimer = 0.00f;
    this->ChangedPeaceDelay = 0.00f;
}

