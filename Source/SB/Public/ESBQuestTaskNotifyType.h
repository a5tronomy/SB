#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskNotifyType.generated.h"

UENUM()
enum ESBQuestTaskNotifyType {
    SBQuestTaskNotify_None,
    SBQuestTaskNotify_Start,
    SBQuestTaskNotify_Update,
    SBQuestTaskNotify_Complete,
    SBQuestTaskNotify_ForceUpdate,
};

