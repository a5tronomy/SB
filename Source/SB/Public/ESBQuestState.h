#pragma once
#include "CoreMinimal.h"
#include "ESBQuestState.generated.h"

UENUM()
enum ESBQuestState {
    ESBState_None = -1,
    ESBState_NotAcquire = 0,
    ESBState_Progress,
    ESBState_CanComplete,
    ESBState_Complete,
    ESBState_AcquireReward,
    ESBState_Failed,
    ESBState_Num,
};

