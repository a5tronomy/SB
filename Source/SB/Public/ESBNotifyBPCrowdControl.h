#pragma once
#include "CoreMinimal.h"
#include "ESBNotifyBPCrowdControl.generated.h"

UENUM()
enum ESBNotifyBPCrowdControl {
    ESBNotifyBPCrowdControl_None,
    ESBNotifyBPCrowdControl_Airborne,
    ESBNotifyBPCrowdControl_KnockBack,
    ESBNotifyBPCrowdControl_Down,
    ESBNotifyBPCrowdControl_Groggy,
};

