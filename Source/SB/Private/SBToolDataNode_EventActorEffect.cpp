#include "SBToolDataNode_EventActorEffect.h"

USBToolDataNode_EventActorEffect::USBToolDataNode_EventActorEffect() {
    this->ID = 0;
    this->ToTarget = ZoneEvent_ActorTargetToPlayer;
    this->EventorType = ZoneEventEventorType_Eventor;
    this->ToCaster = ESBZoneEventActorCaster_None;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
}


