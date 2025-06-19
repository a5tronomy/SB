#pragma once
#include "CoreMinimal.h"
#include "ESBQuestEventType.generated.h"

UENUM()
enum class ESBQuestEventType : uint8 {
    ProgressCounterTask,
    CompleteRequest,
};

