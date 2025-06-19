#pragma once
#include "CoreMinimal.h"
#include "ESBActorInteractionStepEvent.generated.h"

UENUM()
enum ESBActorInteractionStepEvent {
    ESBActorInteractionStepEvent_None,
    ESBActorInteractionStepEvent_Start,
    ESBActorInteractionStepEvent_Finish,
};

