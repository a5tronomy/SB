#include "SBInteractionNode_ConditionGroup.h"

USBInteractionNode_ConditionGroup::USBInteractionNode_ConditionGroup() {
    this->InteractionNodeType = ESBIANode_ConditionNode;
    this->ID = 0;
    this->ConditionEq = ESBEQ_None;
    this->GroupEq1 = ESBEQ_None;
    this->GroupEq2 = ESBEQ_None;
}


