#include "SBInteractionNode_Base.h"

USBInteractionNode_Base::USBInteractionNode_Base() {
    this->InteractionNodeType = ESBIANode_EventNode;
    this->LinkToParentPinIndex = 0;
    this->LinkeResultType = ESBInteractionResult_Success;
}


