#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventInteractSaveType.generated.h"

UENUM()
enum ESBZoneEventInteractSaveType {
    ESBZoneEventInteractSave_None,
    ESBZoneEventInteractSave_Immediate,
    ESBZoneEventInteractSave_FinishSequence,
};

