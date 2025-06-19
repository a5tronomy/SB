#include "SBZoneTriggerActor.h"

ASBZoneTriggerActor::ASBZoneTriggerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bActiveTrigger = true;
    this->SBTriggerParentActor = NULL;
    this->bUsePlayerCameraDirectionTrigger = false;
    this->bInOutTrigger = false;
    this->bIgnoreDoingCount = false;
    this->bSetProperty = false;
    this->EventID = -1;
    this->LeaveEventId = 0;
    this->bUseCaptureParentTM = false;
    this->InitialDoingCount = 0;
    this->DoingType = ZoneTrigger_Do_Interaction;
    this->ActiveRange = 0.00f;
    this->bPendingCheck = false;
    this->TriggerType = ZoneTriggerType_Character;
    this->PendingEventIndex = -1;
}


