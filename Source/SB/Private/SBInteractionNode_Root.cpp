#include "SBInteractionNode_Root.h"

USBInteractionNode_Root::USBInteractionNode_Root() {
    this->InteractionNodeType = ESBIANode_Root;
    this->bForceFoldWeapon = true;
    this->bOperateNonCombat = false;
    this->bOperateNonDialogue = false;
    this->ConditionCheckType = ESBIAConditionCheck_None;
    this->HoldDurationType = ESBInteractionHoldDuration_Normal;
    this->OwnerRotationType = ESBInteractionOwnerRotation_None;
    this->bUseCasterEffect = true;
    this->bUseCancelOutOfRange = false;
    this->bModeDialogue = false;
    this->bPauseMetaAI = true;
    this->bPendingHUDEvent = true;
    this->bStopCasterShowAtFinish = true;
    this->bHideInteractionUI = false;
    this->bBlockPhotoMode = false;
    this->CancelFilterType = ESBInteractionCancelFilterType_None;
    this->bSaveGame = true;
    this->bEndSaveGame = false;
    this->bBlockEndSaveGame = true;
    this->PhotoModeAllowType = ESBPhotoModeInteractionAllowType_EnableFree;
}


