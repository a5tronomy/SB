#pragma once
#include "CoreMinimal.h"
#include "ESBShopType.generated.h"

UENUM()
enum ESBShopType {
    ESBShopType_None,
    ESBShopType_Buy,
    ESBShopType_Exchange,
    ESBShopType_Sell,
};

