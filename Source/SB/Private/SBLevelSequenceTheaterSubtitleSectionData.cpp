#include "SBLevelSequenceTheaterSubtitleSectionData.h"

FSBLevelSequenceTheaterSubtitleSectionData::FSBLevelSequenceTheaterSubtitleSectionData() {
    this->Type = ESBSequencerSubtitleType_ShowImmidate;
    this->bClearSubtitle = false;
    this->DelayCloseTime = 0.00f;
    this->bSkipAllow = false;
    this->bUseFacialAnimTypeIndex = false;
    this->ContentType = ESBSequenceContentType_Default;
}

