#pragma once
#include "CoreMinimal.h"
#include "ESBRetryGameStateType.generated.h"

UENUM()
enum ESBRetryGameStateType {
    ESBRetryGameStateType_None,
    ESBRetryGameStateType_Start,
    ESBRetryGameStateType_Cancel,
    ESBRetryGameStateType_Finish,
};

