#include "SBEventMetaAITableProperty.h"

FSBEventMetaAITableProperty::FSBEventMetaAITableProperty() {
    this->ID = 0;
    this->ToTarget = ZoneEvent_ActorTargetToPlayer;
    this->MetaAIEventType = ESBMetaAIEventType_SpecialBehavior;
    this->ForceThink = ESBMetaAIThink::None;
}

