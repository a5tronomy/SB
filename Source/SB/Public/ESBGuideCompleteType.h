#pragma once
#include "CoreMinimal.h"
#include "ESBGuideCompleteType.generated.h"

UENUM()
enum ESBGuideCompleteType {
    ESBGuideCompleteType_None,
    ESBGuideCompleteType_Command,
    ESBGuideCompleteType_SkillActiveStep,
    ESBGuideCompleteType_ActorCondition,
    ESBGuideCompleteType_EventMove,
    ESBGuideCompleteType_Effect,
    ESBGuideCompleteType_Scan,
    ESBGuideCompleteType_LockOn,
    ESBGuideCompleteType_AcquireItem,
    ESBGuideCompleteType_Swimming,
    ESBGuideCompleteType_UWSwimming,
    ESBGuideCompleteType_SlopeSliding,
    ESBGuideCompleteType_SlopeJumping,
    ESBGuideCompleteType_Fishing,
    ESBGuideCompleteType_Interaction,
};

