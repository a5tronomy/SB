#include "SBLevelSequenceEventActorAISectionData.h"

FSBLevelSequenceEventActorAISectionData::FSBLevelSequenceEventActorAISectionData() {
    this->ActorTarget = ZoneEvent_ActorTargetToPlayer;
    this->ActiveAI = false;
    this->bControlMovement = false;
    this->MovementMode = MOVE_None;
}

