#pragma once
#include "CoreMinimal.h"
#include "ESBLevelTargetActor.generated.h"

UENUM()
enum ESBLevelTargetActor {
    ESBLevelTarget_None,
    ESBLevelTarget_Self,
    ESBLevelTarget_Specified,
    ESBLevelTarget_SpecifiedEnv,
    ESBLevelTarget_SpecifiedEventActor,
    ESBLevelTarget_LocalPlayer,
};

