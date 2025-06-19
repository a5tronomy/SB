#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskState.generated.h"

UENUM()
enum ESBQuestTaskState {
    ESBQuestTaskState_None,
    ESBQuestTaskState_Progress,
    ESBQuestTaskState_Complete,
    ESBQuestTaskState_Failed,
    ESBQuestTaskState_Inactive,
};

