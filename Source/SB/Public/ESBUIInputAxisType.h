#pragma once
#include "CoreMinimal.h"
#include "ESBUIInputAxisType.generated.h"

UENUM()
enum class ESBUIInputAxisType : uint8 {
    LeftAxisX,
    LeftAxisY,
    RightAxisX,
    RightAxisY,
    Max,
};

