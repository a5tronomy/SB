#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionStepState.generated.h"

UENUM()
enum ESBInteractionStepState {
    ESBInteraction_None,
    ESBInteraction_Executable,
    ESBInteraction_Ready,
    ESBInteraction_SuccessHoldTime,
    ESBInteraction_DoAction,
    ESBInteraction_Running,
    ESBInteraction_Cancel,
};

