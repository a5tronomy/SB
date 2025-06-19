#pragma once
#include "CoreMinimal.h"
#include "ESBEnterGameResult.generated.h"

UENUM()
enum ESBEnterGameResult {
    ESBEnterGameResult_None,
    ESBEnterGameResult_NotExistSaveSlot,
    ESBEnterGameResult_NotFoundTargetCamp,
    ESBEnterGameResult_NotFoundTargetZone,
    ESBEnterGameResult_EnterFail,
    ESBEnterGameResult_EnterSuccess,
};

