#pragma once
#include "CoreMinimal.h"
#include "ESBWorldObjectType.generated.h"

UENUM()
enum ESBWorldObjectType {
    ESBWorldObjectType_None,
    ESBWorldObjectType_EffectVolume,
    ESBWorldObjectType_ZoneEventActor,
    ESBWorldObjectType_AreaControlVolume,
    ESBWorldObjectType_RestorationWorldActor,
    ESBWorldObjectType_BlockingVolume,
};

