#include "SBInteractionNode_Condition2.h"

USBInteractionNode_Condition2::USBInteractionNode_Condition2() {
    this->InteractionNodeType = ESBIANode_ConditionNode;
    this->ID = 0;
    this->ConditionType = ESBConditionType_None;
    this->ConditionEq = ESBEQ_None;
    this->CheckValue = 0;
    this->CheckStatCalcType = ESBConditionCalcuationType_None;
}


