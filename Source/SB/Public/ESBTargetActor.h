#pragma once
#include "CoreMinimal.h"
#include "ESBTargetActor.generated.h"

UENUM()
enum ESBTargetActor {
    Target_None,
    Target_Self,
    Target_SpecifiedTargetes,
    Target_Ally,
    Target_AllyWithSelf,
    Target_Enemy,
    Target_All,
    Target_AllWithoutSelf,
    Target_Owner,
    Target_LockOn,
    Target_AIDetectTarget,
    Target_AIDetectSubTarget,
};

