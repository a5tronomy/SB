#pragma once
#include "CoreMinimal.h"
#include "ESBScreenEffectType.generated.h"

UENUM()
enum ESBScreenEffectType {
    ScreenEffectType_None,
    ScreenEffectType_DeadZoneAlert,
    ScreenEffectType_TachyMode,
    ScreenEffectType_LowHealthAlert,
    ScreenEffectType_SafetyDistance,
    ScreenEffectType_FusionMode,
    ScreenEffectType_TachyFusionMode,
};

