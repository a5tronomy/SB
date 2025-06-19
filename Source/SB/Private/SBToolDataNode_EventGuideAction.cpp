#include "SBToolDataNode_EventGuideAction.h"

USBToolDataNode_EventGuideAction::USBToolDataNode_EventGuideAction() {
    this->ID = 0;
    this->StopGuideAction = false;
    this->ToTarget = ZoneEvent_ActorTargetToTag;
    this->TargetTagName = TEXT("Drone");
    this->FollowerStartDelayTime = 0.00f;
}


