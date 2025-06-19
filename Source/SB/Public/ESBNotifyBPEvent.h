#pragma once
#include "CoreMinimal.h"
#include "ESBNotifyBPEvent.generated.h"

UENUM()
enum ESBNotifyBPEvent {
    ESBNotifyBPEvent_GuideAction_Start,
    ESBNotifyBPEvent_GuideAction_Wait,
    ESBNotifyBPEvent_GuideAction_Cancel,
    ESBNotifyBPEvent_GuideAction_End,
    ESBNotifyBPEvent_ActorDead,
    ESBNotifyBPEvent_CharacterBindingOn,
    ESBNotifyBPEvent_CharacterBindingOff,
    ESBNotifyBPEvent_ActorHitMe,
};

