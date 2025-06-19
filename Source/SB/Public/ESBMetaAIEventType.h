#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAIEventType.generated.h"

UENUM()
enum ESBMetaAIEventType {
    ESBMetaAIEventType_SpecialBehavior,
    ESBMetaAIEventType_ForceThink,
    ESBMetaAIEventType_AddTag,
};

