#include "SBZoneEventActorEffectTableProperty.h"

FSBZoneEventActorEffectTableProperty::FSBZoneEventActorEffectTableProperty() {
    this->ID = 0;
    this->ToTarget = ZoneEvent_ActorTargetToPlayer;
    this->EventorType = ZoneEventEventorType_None;
    this->ToCaster = ESBZoneEventActorCaster_None;
}

