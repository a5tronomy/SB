#pragma once
#include "CoreMinimal.h"
#include "ESBJob.generated.h"

UENUM()
enum class ESBJob : uint8 {
    None,
    Citizen,
    Guard,
    Engineer,
    Scavenger,
    Merchant,
};

