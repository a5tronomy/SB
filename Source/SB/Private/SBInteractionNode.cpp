#include "SBInteractionNode.h"

USBInteractionNode::USBInteractionNode() {
    this->ShowLoopCount = -1;
    this->ShowPlayRuleType = ESBInteractShowPlayRuleType_Static;
    this->DelayTime = 0.00f;
    this->bActorBlockAll = false;
    this->IgnoreEventByPlayerDead = false;
    this->Success_Sound = NULL;
    this->Fail_Sound = NULL;
    this->InteractionMoveType = ESBInteractionMove_None;
    this->ParentPinIndex = 4294967295;
    this->bExitInteraction = false;
}


