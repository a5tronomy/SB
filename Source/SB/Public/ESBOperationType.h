#pragma once
#include "CoreMinimal.h"
#include "ESBOperationType.generated.h"

UENUM()
enum ESBOperationType {
    ESBOperation_EQ,
    ESBOperation_NE,
    ESBOperation_LT,
    ESBOperation_GT,
    ESBOperation_LE,
    ESBOperation_GE,
};

