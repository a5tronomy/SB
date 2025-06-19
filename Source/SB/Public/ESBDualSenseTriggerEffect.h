#pragma once
#include "CoreMinimal.h"
#include "ESBDualSenseTriggerEffect.generated.h"

UENUM()
enum ESBDualSenseTriggerEffect {
    DualSenseTriggerEffect_None,
    DualSenseTriggerEffect_Clear,
    DualSenseTriggerEffect_Feedback,
    DualSenseTriggerEffect_Weapon,
    DualSenseTriggerEffect_Vibration,
    DualSenseTriggerEffect_MultiPositionFeedback,
    DualSenseTriggerEffect_SlopeFeedback,
    DualSenseTriggerEffect_MultiPositionVibration,
};

