#include "SBInteractionNode_RequestBoardUI.h"

USBInteractionNode_RequestBoardUI::USBInteractionNode_RequestBoardUI() {
    this->InteractionNodeType = ESBIANode_UI;
    this->DelayTime = 0.00f;
    this->bActorBlockAll = false;
    this->InteractionMoveType = ESBInteractionMove_None;
    this->RequestBoardType = ESBUIRequestBoardType_Default;
}


