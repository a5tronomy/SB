#pragma once
#include "CoreMinimal.h"
#include "ESBUIStudioPlayType.generated.h"

UENUM()
enum ESBUIStudioPlayType {
    ESBUIStudioPlayType_None,
    ESBUIStudioPlayType_Start,
    ESBUIStudioPlayType_Loop,
    ESBUIStudioPlayType_End,
};

