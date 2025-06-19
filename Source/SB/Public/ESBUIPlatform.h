#pragma once
#include "CoreMinimal.h"
#include "ESBUIPlatform.generated.h"

UENUM()
enum ESBUIPlatform {
    ESBUIPlatform_Unknown,
    ESBUIPlatform_Windows,
    ESBUIPlatform_PS4,
    ESBUIPlatform_PS5 = 4,
    ESBUIPlatform_XBoxOne = 8,
    ESBUIPlatform_All = 15,
};

