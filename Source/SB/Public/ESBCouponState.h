#pragma once
#include "CoreMinimal.h"
#include "ESBCouponState.generated.h"

UENUM()
enum class ESBCouponState {
    None,
    NotAvailable,
    Available,
    WaitRequest,
    Acquired,
};

