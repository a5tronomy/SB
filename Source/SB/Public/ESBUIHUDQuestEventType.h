#pragma once
#include "CoreMinimal.h"
#include "ESBUIHUDQuestEventType.generated.h"

UENUM()
enum class ESBUIHUDQuestEventType : uint8 {
    None,
    TaskStart,
    TaskUpdate,
    TaskDone,
    QuestStart,
    QuestDone,
    TrackingIn,
    TrackingOut,
    ForceUpdate,
};

