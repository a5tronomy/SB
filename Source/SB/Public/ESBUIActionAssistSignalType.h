#pragma once
#include "CoreMinimal.h"
#include "ESBUIActionAssistSignalType.generated.h"

UENUM()
enum class ESBUIActionAssistSignalType : uint8 {
    Parry,
    Evade,
    Repulse,
    Blink,
};

