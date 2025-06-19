#pragma once
#include "CoreMinimal.h"
#include "ESBDebugDataState.generated.h"

UENUM()
enum ESBDebugDataState {
    ESBDebugDataState_None,
    ESBDebugDataState_Normal,
    ESBDebugDataState_Warning,
    ESBDebugDataState_Critical,
};

