#pragma once
#include "CoreMinimal.h"
#include "ESBUIHUDNotifyUpdateType.generated.h"

UENUM()
enum class ESBUIHUDNotifyUpdateType : uint8 {
    None,
    Album,
    Quest,
    Turntable,
};

