#include "SBInteractionNode_IntCompare.h"

USBInteractionNode_IntCompare::USBInteractionNode_IntCompare() {
    this->InteractionNodeType = ESBIANode_SetCustomValue;
    this->Operation = ESBOperation_EQ;
    this->Graph_ValueA = 0;
    this->Graph_ValueB = 0;
}


