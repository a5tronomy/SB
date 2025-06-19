#include "SBZoneEventActorActiveTableProperty.h"

FSBZoneEventActorActiveTableProperty::FSBZoneEventActorActiveTableProperty() {
    this->ID = 0;
    this->Active = false;
    this->ToTarget = ZoneEvent_ActorTargetToPlayer;
}

