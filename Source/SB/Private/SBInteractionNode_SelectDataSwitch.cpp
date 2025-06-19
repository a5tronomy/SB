#include "SBInteractionNode_SelectDataSwitch.h"

USBInteractionNode_SelectDataSwitch::USBInteractionNode_SelectDataSwitch() {
    this->InteractionNodeType = ESBIANode_SelectDataSwitch;
    this->SelectDataPriority = 1;
    this->Equation = ESBEQ_LEQ;
}


