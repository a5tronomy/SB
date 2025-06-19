#pragma once
#include "CoreMinimal.h"
#include "ESBGamePhaseState.generated.h"

UENUM()
enum ESBGamePhaseState {
    ESBGamePhaseState_None,
    ESBGamePhaseState_Lobby,
    ESBGamePhaseState_PlayGame,
};

