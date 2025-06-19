#pragma once
#include "CoreMinimal.h"
#include "ESBShowSoundOwnerTarget.generated.h"

UENUM()
enum class ESBShowSoundOwnerTarget : uint8 {
    Auto,
    MainActor,
    OtherActor,
};

