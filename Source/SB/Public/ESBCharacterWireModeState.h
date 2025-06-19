#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterWireModeState.generated.h"

UENUM()
enum ESBCharacterWireModeState {
    WireState_Ready,
    WireState_Flying,
    WireState_Set,
    WireState_Recharging,
};

