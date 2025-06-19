#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterWindVolumeEncompassState.generated.h"

UENUM()
enum class ESBCharacterWindVolumeEncompassState {
    ESBCharacterWindVolumeEncompassState_None,
    ESBCharacterWindVolumeEncompassState_Entering,
    ESBCharacterWindVolumeEncompassState_Entered,
    ESBCharacterWindVolumeEncompassState_Leaving,
    ESBCharacterWindVolumeEncompassState_FinishedLeaving,
};

