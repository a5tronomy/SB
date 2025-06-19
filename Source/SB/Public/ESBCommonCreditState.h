#pragma once
#include "CoreMinimal.h"
#include "ESBCommonCreditState.generated.h"

UENUM()
enum class ESBCommonCreditState : uint8 {
    None,
    Leader,
    Scroll,
};

