#include "SBInteractionNode_SetCustomValue.h"

USBInteractionNode_SetCustomValue::USBInteractionNode_SetCustomValue() {
    this->InteractionNodeType = ESBIANode_SetCustomValue;
    this->CustomDataValue = 0;
    this->ValueApplyType = ESBIAValueApply_Add;
}


