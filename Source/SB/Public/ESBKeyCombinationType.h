#pragma once
#include "CoreMinimal.h"
#include "ESBKeyCombinationType.generated.h"

UENUM()
enum class ESBKeyCombinationType {
    None,
    Shift,
    Ctrl,
    Alt,
    Cmd,
};

