#include "SBInteractionNode_Grab.h"

USBInteractionNode_Grab::USBInteractionNode_Grab() {
    this->InteractionNodeType = ESBIANode_Grab;
    this->bActorBlockAll = false;
    this->InteractionMoveType = ESBInteractionMove_Walk;
}


