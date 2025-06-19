#include "SBInteractionNode_InteractCamp.h"

USBInteractionNode_InteractCamp::USBInteractionNode_InteractCamp() {
    this->InteractionNodeType = ESBIANode_InteractCamp;
    this->InteractType = ESBInteractCamp_InteractWithResetZone;
    this->bUseSaveGame = false;
    this->OwnerShow = NULL;
    this->CasterShow = NULL;
    this->ShowLoopCount = -1;
    this->ShowPlayRuleType = ESBInteractShowPlayRuleType_Static;
    this->bShowResetZoneUI = false;
    this->DelayTime = 0.00f;
    this->bActorBlockAll = false;
    this->InteractionMoveType = ESBInteractionMove_None;
}


