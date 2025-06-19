#pragma once
#include "CoreMinimal.h"
#include "ESBCheckShape.generated.h"

UENUM()
enum ESBCheckShape {
    CheckShape_None,
    CheckShape_2DBox,
    CheckShape_3DBox,
    CheckShape_2DArc,
    CheckShape_3DArc,
    CheckShape_2DCircle,
    CheckShape_3DCircle,
    CheckShape_3DCylinder,
};

