#pragma once
#include "CoreMinimal.h"
#include "ESBPhaseFlowEvent.generated.h"

UENUM()
enum ESBPhaseFlowEvent {
    ESBPhaseFlowEvent_EnterPhase,
    ESBPhaseFlowEvent_ChangeGameMap,
    ESBPhaseFlowEvent_Revival,
    ESBPhaseFlowEvent_Quit,
    ESBPhaseFlowEvent_CompleteLoading,
    ESBPhaseFlowEvent_CompleteRevival,
    ESBPhaseFlowEvent_ConnectToMultiPlay,
    ESBPhaseFlowEvent_ReturnToSinglePlay,
};

