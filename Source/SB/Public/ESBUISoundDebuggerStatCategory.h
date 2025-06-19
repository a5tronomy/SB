#pragma once
#include "CoreMinimal.h"
#include "ESBUISoundDebuggerStatCategory.generated.h"

UENUM()
enum class ESBUISoundDebuggerStatCategory : uint8 {
    None,
    Index,
    Option,
    Class,
    SoundPath,
};

