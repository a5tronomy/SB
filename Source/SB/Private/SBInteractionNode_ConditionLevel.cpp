#include "SBInteractionNode_ConditionLevel.h"

USBInteractionNode_ConditionLevel::USBInteractionNode_ConditionLevel() {
    this->InteractionNodeType = ESBIANode_ConditionNode;
    this->Equation = ESBEQ_None;
    this->CompareLevel = 0;
    this->ResultValue = false;
}


