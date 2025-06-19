#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskGroupState.generated.h"

UENUM()
enum ESBQuestTaskGroupState {
    TaskGroup_None,
    TaskGroup_Progress,
    TaskGroup_Complete,
    TaskGroup_Failed,
};

