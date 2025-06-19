#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionOwnerRotationType.generated.h"

UENUM()
enum ESBInteractionOwnerRotationType {
    ESBInteractionOwnerRotation_None,
    ESBInteractionOwnerRotation_ToCaster,
    ESBInteractionOwnerRotation_DoNotRotate,
};

