#pragma once
#include "CoreMinimal.h"
#include "ESBUIInputType.generated.h"

UENUM()
enum ESBUIInputType {
    ESBUIInputType_Positive,
    ESBUIInputType_Negative,
    ESBUIInputType_Gamepad_X,
    ESBUIInputType_Gamepad_Y,
    ESBUIInputType_Gamepad_A,
    ESBUIInputType_Gamepad_B,
};

