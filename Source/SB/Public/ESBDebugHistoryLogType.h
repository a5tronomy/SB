#pragma once
#include "CoreMinimal.h"
#include "ESBDebugHistoryLogType.generated.h"

UENUM()
enum ESBDebugHistoryLogType {
    ESBDebugHistoryType_None,
    ESBDebugHistoryType_Enable,
    ESBDebugHistoryType_State,
    ESBDebugHistoryType_EnvActiveState,
    ESBDebugHistoryType_TriggerDoingCount,
    ESBDebugHistoryType_TriggerDoingEvent,
    ESBDebugHistoryType_Reset,
    ESBDebugHistoryType_LefeState,
    ESBDebugHistoryType_Num,
};

