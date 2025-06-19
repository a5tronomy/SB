#pragma once
#include "CoreMinimal.h"
#include "ESBWayInterpType.generated.h"

UENUM()
enum ESBWayInterpType {
    ESBInterp_Linear,
    ESBInterp_CatmullRom,
    ESBInterp_Sin,
    ESBInterp_Round,
    ESBInterp_SplineComponent,
};

