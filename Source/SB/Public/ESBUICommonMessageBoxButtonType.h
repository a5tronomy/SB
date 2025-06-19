#pragma once
#include "CoreMinimal.h"
#include "ESBUICommonMessageBoxButtonType.generated.h"

UENUM()
enum class ESBUICommonMessageBoxButtonType : uint8 {
    None,
    Close,
    PositiveNegative,
    YesNo,
    HoldYesNo,
    HoldIgnoreRetry,
    ConfirmCancel,
    HoldConfirmCancel,
    ConfirmDontAgain,
};

