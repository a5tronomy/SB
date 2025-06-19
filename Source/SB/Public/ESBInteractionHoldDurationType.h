#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionHoldDurationType.generated.h"

UENUM()
enum ESBInteractionHoldDurationType {
    ESBInteractionHoldDuration_Slow,
    ESBInteractionHoldDuration_Normal,
    ESBInteractionHoldDuration_Fast,
    ESBInteractionHoldDuration_Immediate,
};

