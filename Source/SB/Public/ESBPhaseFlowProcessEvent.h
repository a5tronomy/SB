#pragma once
#include "CoreMinimal.h"
#include "ESBPhaseFlowProcessEvent.generated.h"

UENUM()
enum ESBPhaseFlowProcessEvent {
    ESBPhaseFlowProcessEvent_Start,
    ESBPhaseFlowProcessEvent_CompleteShowLoadingScreen,
    ESBPhaseFlowProcessEvent_CompleteHideLoadingScreen,
    ESBPhaseFlowProcessEvent_CompleteClearSB,
    ESBPhaseFlowProcessEvent_CompleteClearEngine,
    ESBPhaseFlowProcessEvent_CompleteLoadMap,
    ESBPhaseFlowProcessEvent_CompleteEngineInit,
    ESBPhaseFlowProcessEvent_CompleteClientInit,
    ESBPhaseFlowProcessEvent_CompleteClientReset,
    ESBPhaseFlowProcessEvent_CompleteEnterZone,
    ESBPhaseFlowProcessEvent_FailEnterZone,
    ESBPhaseFlowProcessEvent_CompleteResetZone,
    ESBPhaseFlowProcessEvent_CompleteLoadSaveFileProc,
    ESBPhaseFlowProcessEvent_CompletePlayerActorSpawn,
    ESBPhaseFlowProcessEvent_PlayIntroSequence,
};

