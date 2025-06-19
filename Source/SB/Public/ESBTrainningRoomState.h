#pragma once
#include "CoreMinimal.h"
#include "ESBTrainningRoomState.generated.h"

UENUM()
enum ESBTrainningRoomState {
    ESBTrainningRoomState_None,
    ESBTrainningRoomState_RequestEnter,
    ESBTrainningRoomState_Entered,
    ESBTrainningRoomState_RequestLeave,
};

