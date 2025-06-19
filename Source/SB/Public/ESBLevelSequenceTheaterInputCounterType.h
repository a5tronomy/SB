#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceTheaterInputCounterType.generated.h"

UENUM()
enum ESBLevelSequenceTheaterInputCounterType {
    ESBLevelSequenceTheaterInputCounterType_GamePad_FaceButton_Left,
    ESBLevelSequenceTheaterInputCounterType_GamePad_FaceButton_Top,
    SBLevelSequenceTheaterInputCounterType_GamePad_FaceButton_Right,
    SBLevelSequenceTheaterInputCounterType_GamePad_FaceButton_Bottom,
    SBLevelSequenceTheaterInputCounterType_Gamepad_LeftShoulder,
    SBLevelSequenceTheaterInputCounterType_Gamepad_RightShoulder,
    SBLevelSequenceTheaterInputCounterType_GamePad_LeftStick,
    SBLevelSequenceTheaterInputCounterType_GamePad_RightStick,
    SBLevelSequenceTheaterInputCounterType_Gamepad_LeftTrigger,
    SBLevelSequenceTheaterInputCounterType_Gamepad_RightTrigger,
};

