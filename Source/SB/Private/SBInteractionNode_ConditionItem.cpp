#include "SBInteractionNode_ConditionItem.h"

USBInteractionNode_ConditionItem::USBInteractionNode_ConditionItem() {
    this->InteractionNodeType = ESBIANode_ConditionNode;
    this->Equation = ESBEQ_GEQ;
    this->ItemAmount = 0;
    this->CheckRange = ESBConditionItemCheckRangeType_Inven;
    this->ResultValue = false;
}


