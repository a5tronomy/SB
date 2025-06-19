#include "SBInteractionNode_UI.h"

USBInteractionNode_UI::USBInteractionNode_UI() {
    this->InteractionNodeType = ESBIANode_UI;
    this->OpenUIType = ESBUIGameMenuType_Default;
    this->OpenUILogicType = ESBUILogicType_NONE;
    this->OwnerShow = NULL;
    this->CasterShow = NULL;
    this->ShowLoopCount = -1;
    this->ShowPlayRuleType = ESBInteractShowPlayRuleType_Static;
    this->DelayTime = 0.00f;
    this->bActorBlockAll = false;
    this->bOpenAllMenu = true;
    this->InteractionMoveType = ESBInteractionMove_None;
    this->bAllowPresentation = false;
}


