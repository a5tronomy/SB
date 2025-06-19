#include "SBToolDataNode_EventLevelSequence.h"

USBToolDataNode_EventLevelSequence::USBToolDataNode_EventLevelSequence() {
    this->ID = 0;
    this->SequenceActorTemplate = NULL;
    this->Type = ZoneEvent_LevelSeq_Play;
    this->EventorType = ZoneEventEventorType_None;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
    this->StartMovementNone = true;
    this->StopEndFrame = false;
    this->bDontStopResetZone = false;
    this->LevelSequenceContentsType = ESBLevelSequenceContentsType_Default;
    this->UseRandomSequence = false;
    this->bPendingTheaterByNiike = false;
}


