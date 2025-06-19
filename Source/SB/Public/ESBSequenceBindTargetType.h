#pragma once
#include "CoreMinimal.h"
#include "ESBSequenceBindTargetType.generated.h"

UENUM()
enum ESBSequenceBindTargetType {
    ESBSequenceBindTargetType_None,
    ESBSequenceBindTargetType_ZoneEnv,
    ESBSequenceBindTargetType_LastInteractCamp,
    ESBSequenceBindTargetType_LastInteractFullCamp,
    ESBSequenceBindTargetType_ActorTag,
    ESBSequenceBindTargetType_ActorTagLevel,
};

