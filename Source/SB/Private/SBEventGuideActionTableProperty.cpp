#include "SBEventGuideActionTableProperty.h"

FSBEventGuideActionTableProperty::FSBEventGuideActionTableProperty() {
    this->ID = 0;
    this->ToTarget = ZoneEvent_ActorTargetToPlayer;
    this->FollowerStartDelayTime = 0.00f;
    this->StopGuideAction = false;
}

