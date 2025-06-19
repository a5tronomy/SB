#include "SBZoneEventActorBattleStateTableProperty.h"

FSBZoneEventActorBattleStateTableProperty::FSBZoneEventActorBattleStateTableProperty() {
    this->ID = 0;
    this->BattleState = false;
    this->ToTarget = ZoneEvent_ActorTargetToPlayer;
    this->UseForceFoldWeaponValue = false;
    this->FoldWeaponValue = false;
}

