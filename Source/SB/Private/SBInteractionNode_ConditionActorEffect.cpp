#include "SBInteractionNode_ConditionActorEffect.h"

USBInteractionNode_ConditionActorEffect::USBInteractionNode_ConditionActorEffect() {
    this->CompareAttachedEffect = true;
    this->TargetActorType = ZoneEvent_ActorTargetToTag;
    this->ResultValue = false;
}


