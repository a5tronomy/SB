#pragma once
#include "CoreMinimal.h"
#include "ESBAnimNodeBlendSpaceSlot.generated.h"

UENUM()
enum ESBAnimNodeBlendSpaceSlot {
    BlendSpaceSlot_Run,
    BlendSpaceSlot_Flying,
    BlendSpaceSlot_LockOnRun,
    BlendSpaceSlot_LockOnSprint,
    BlendSpaceSlot_BlockMove,
    BlendSpaceSlot_EventMove,
    BlendSpaceSlot_EventSlideMove,
    BlendSpaceSlot_Sequence,
    BlendSpaceSlot_GrabObject,
    BlendSpaceSlot_AimOffset,
    BlendSpaceSlot_RunTilt,
    BlendSpaceSlot_OverriddenRun,
    BlendSpaceSlot_OverriddenLockOnRun,
    BlendSpaceSlot_OverriddenLockOnSprint,
    BlendSpaceSlot_Selfie,
    BlendSpaceSlot_None,
};

