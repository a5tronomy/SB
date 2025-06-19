#pragma once
#include "CoreMinimal.h"
#include "ESBUIRequestState.generated.h"

UENUM()
enum class ESBUIRequestState : uint8 {
    None,
    CanAcquire,
    CantAcquire,
    Progress,
    CanComplete,
    Complete,
    Failed,
    Deny,
};

