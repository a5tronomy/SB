#pragma once
#include "CoreMinimal.h"
#include "ESBScanControlOwner.generated.h"

UENUM()
enum ESBScanControlOwner {
    ESBScanControlOwner_None,
    ESBScanControlOwner_Drone,
    ESBScanControlOwner_Studio,
    ESBScanControlOwner_Sequence,
};

