#pragma once
#include "CoreMinimal.h"
#include "ESBWorldEnvCounterType.generated.h"

UENUM()
enum ESBWorldEnvCounterType {
    ESBWorldEnvCounterType_None,
    ESBWorldEnvCounterType_DitherDisable,
    ESBWorldEnvCounterType_VolumetricRenderTargetDisable,
    ESBWorldEnvCounterType_MouseCursorVisible,
    ESBWorldEnvCounterType_PostProcessingDisable,
    ESBWorldEnvCounterType_MouseCursorVisibleWhenKeyboardInput,
};

