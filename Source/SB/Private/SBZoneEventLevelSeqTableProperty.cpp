#include "SBZoneEventLevelSeqTableProperty.h"

FSBZoneEventLevelSeqTableProperty::FSBZoneEventLevelSeqTableProperty() {
    this->ID = 0;
    this->Type = ZoneEvent_LevelSeq_Play;
    this->bStopEndFrame = false;
    this->EventorType = ZoneEventEventorType_None;
    this->bDontStopResetZone = false;
    this->LevelSequenceContentsType = ESBLevelSequenceContentsType_Default;
    this->StartMovementNone = false;
    this->UseRandomSequence = false;
    this->bPendingTheaterByNiike = false;
}

