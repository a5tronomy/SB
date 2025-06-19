#pragma once
#include "CoreMinimal.h"
#include "ESBSequencePlayTransformType.generated.h"

UENUM()
enum ESBSequencePlayTransformType {
    ESBSeqPlayTransform_None,
    ESBSeqPlayTransform_Owner,
    ESBSeqPlayTransform_Caster,
    ESBSeqPlayTransform_LocalPlayer,
    ESBSeqPlayTransform_SpawnAlias,
    ESBSeqPlayTransform_SpawnPointActor,
    ESBSeqPlayTransform_ZoneEnvActor,
};

