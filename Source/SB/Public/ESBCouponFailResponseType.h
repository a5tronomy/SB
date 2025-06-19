#pragma once
#include "CoreMinimal.h"
#include "ESBCouponFailResponseType.generated.h"

UENUM()
enum class ESBCouponFailResponseType {
    IssuanceError,
    PurchaseInfoError,
    Expired,
    DataVerificationError,
    NetworkError,
};

