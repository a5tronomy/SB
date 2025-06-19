#include "SBLevelSequenceTheaterInteractionSelectSectionData.h"

FSBLevelSequenceTheaterInteractionSelectSectionData::FSBLevelSequenceTheaterInteractionSelectSectionData() {
    this->RequireWaitInput = false;
    this->ImmidateTakeSkip = false;
    this->ImmidateInteractionReceive = false;
    this->BGDeactiveDelayTime = 0.00f;
    this->ContentType = ESBSequenceContentType_Default;
}

