#pragma once
#include "CoreMinimal.h"
#include "ESBDualSenseTriggerEffectState.generated.h"

UENUM()
enum ESBDualSenseTriggerEffectState {
    DualSenseTriggerEffectState_None = -2,
    DualSenseTriggerEffectState_Intercepted,
    DualSenseTriggerEffectState_Off = 0,
    DualSenseTriggerEffectState_FeedbackStandby,
    DualSenseTriggerEffectState_FeedbackActive,
    DualSenseTriggerEffectState_WeaponStandby,
    DualSenseTriggerEffectState_WeaponPulling,
    DualSenseTriggerEffectState_WeaponFired,
    DualSenseTriggerEffectState_VibrationStandby,
    DualSenseTriggerEffectState_VibrationActive,
};

