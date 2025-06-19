#pragma once
#include "CoreMinimal.h"
#include "ESBCouponNotAvailableType.generated.h"

UENUM()
enum class ESBCouponNotAvailableType {
    None,
    NotEnoughPlayTime,
    Expired,
    NetworkError,
};

