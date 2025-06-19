#pragma once
#include "CoreMinimal.h"
#include "ESBSignificanceLevel.generated.h"

UENUM()
enum ESBSignificanceLevel {
    ESBSignificanceLevel_VeryLow,
    ESBSignificanceLevel_Low,
    ESBSignificanceLevel_Medium,
    ESBSignificanceLevel_High,
    ESBSignificanceLevel_VeryHigh,
};

