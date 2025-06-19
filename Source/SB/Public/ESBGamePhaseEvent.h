#pragma once
#include "CoreMinimal.h"
#include "ESBGamePhaseEvent.generated.h"

UENUM()
enum ESBGamePhaseEvent {
    ESBGamePhaseEvent_None,
    ESBGamePhaseEvent_EnterGame,
    ESBGamePhaseEvent_Quit,
    ESBGamePhaseEvent_Restart,
    ESBGamePhaseEvent_PostLoadMap,
    ESBGamePhaseEvent_ChangeMap,
};

