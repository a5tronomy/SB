#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheLockType.generated.h"

UENUM()
enum ESBResourceCacheLockType {
    ESBResourceCacheLockType_Unlocked,
    ESBResourceCacheLockType_WorldLocked,
    ESBResourceCacheLockType_GameLocked,
};

