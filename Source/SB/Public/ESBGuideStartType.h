#pragma once
#include "CoreMinimal.h"
#include "ESBGuideStartType.generated.h"

UENUM()
enum ESBGuideStartType {
    ESBGuideStartType_None,
    ESBGuideStartType_BetaGauge,
    ESBGuideStartType_Aggro,
    ESBGuideStartType_Battle,
    ESBGuideStartType_Fishing,
    ESBGuideStartType_EventMove,
    ESBGuideStartType_Swimming,
    ESBGuideStartType_UWSwimming,
    ESBGuideStartType_SlopeSliding,
    ESBGuideStartType_Interaction,
    ESBGuideStartType_Effect,
};

