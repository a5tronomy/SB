#include "SBToolDataNode_EventMetaAI.h"

USBToolDataNode_EventMetaAI::USBToolDataNode_EventMetaAI() {
    this->ID = 0;
    this->ToTarget = ZoneEvent_ActorTargetToTag;
    this->MetaAIEventType = ESBMetaAIEventType_SpecialBehavior;
    this->ForceThink = ESBMetaAIThink::None;
}


