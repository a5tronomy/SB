#pragma once
#include "CoreMinimal.h"
#include "ESBTrainningRoomCommandType.generated.h"

UENUM()
enum ESBTrainningRoomCommandType {
    ESBTrainningRoomCommand_None,
    ESBTrainningRoomCommand_RetryRoom,
    ESBTrainningRoomCommand_TogglePlayerInfinity,
    ESBTrainningRoomCommand_AIType_Left,
    ESBTrainningRoomCommand_AIType_Right,
    ESBTrainningRoomCommand_RightTrigger,
    ESBTrainningRoomCommand_HideHUD,
    ESBTrainningRoomCommand_Exit,
};

