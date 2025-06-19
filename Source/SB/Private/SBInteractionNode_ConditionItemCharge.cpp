#include "SBInteractionNode_ConditionItemCharge.h"

USBInteractionNode_ConditionItemCharge::USBInteractionNode_ConditionItemCharge() {
    this->InteractionNodeType = ESBIANode_ConditionNode;
    this->Equation = ESBEQ_None;
    this->ResultValue = false;
}


