#pragma once
#include "CoreMinimal.h"
#include "ESBStopEffectEvent.generated.h"

UENUM()
enum ESBStopEffectEvent {
    ESBStopEffectEvent_Force,
    ESBStopEffectEvent_OnDead,
    ESBStopEffectEvent_OnRevival,
};

