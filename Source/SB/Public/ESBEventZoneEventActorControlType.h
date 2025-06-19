#pragma once
#include "CoreMinimal.h"
#include "ESBEventZoneEventActorControlType.generated.h"

UENUM()
enum ESBEventZoneEventActorControlType {
    ESBEventZoneEventActorControlType_None,
    ESBEventZoneEventActorControlType_DestructionTimer,
    ESBEventZoneEventActorControlType_DisableDestruction,
};

