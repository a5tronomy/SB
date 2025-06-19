#include "SBInteractionNode_ConditionQuest.h"

USBInteractionNode_ConditionQuest::USBInteractionNode_ConditionQuest() {
    this->InteractionNodeType = ESBIANode_ConditionNode;
    this->CompareState = ESBState_NotAcquire;
    this->ResultValue = false;
}


