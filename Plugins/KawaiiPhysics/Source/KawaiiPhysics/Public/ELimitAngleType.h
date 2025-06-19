#pragma once
#include "CoreMinimal.h"
#include "ELimitAngleType.generated.h"

UENUM()
enum class ELimitAngleType : uint8 {
    AllSide,
    LefeSide,
    RightSide,
};

