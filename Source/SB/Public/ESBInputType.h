#pragma once
#include "CoreMinimal.h"
#include "ESBInputType.generated.h"

UENUM()
enum ESBInputType {
    InputType_MouseKeyboard,
    InputType_Gamepad,
    InputType_Gamepad_DualSense,
    InputType_Unknown,
};

