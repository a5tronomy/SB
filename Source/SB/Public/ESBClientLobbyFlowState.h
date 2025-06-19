#pragma once
#include "CoreMinimal.h"
#include "ESBClientLobbyFlowState.generated.h"

UENUM()
enum ESBClientLobbyFlowState {
    ESBClientLobbyFlowState_None,
    ESBClientLobbyFlowState_LeaveGame,
    ESBClientLobbyFlowState_PostLeaveProcessing,
    ESBClientLobbyFlowState_CompleteLeaveGame,
    ESBClientLobbyFlowState_RequestLobbyLevel,
    ESBClientLobbyFlowState_LoadCompleteLobbyLevel,
    ESBClientLobbyFlowState_CompleteEnterLobby,
};

