#pragma once
#include "CoreMinimal.h"
#include "ACLVisualFidelityChangeResult.generated.h"

UENUM()
enum class ACLVisualFidelityChangeResult : uint8 {
    Dispatched,
    Completed,
    Failed,
};

