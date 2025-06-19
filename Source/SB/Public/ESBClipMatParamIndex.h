#pragma once
#include "CoreMinimal.h"
#include "ESBClipMatParamIndex.generated.h"

UENUM()
enum ESBClipMatParamIndex {
    ESBClipMatParamIndex_Location,
    ESBClipMatParamIndex_Bounds,
    ESBClipMatParamIndex_BasisX,
    ESBClipMatParamIndex_BasisY,
    ESBClipMatParamIndex_BasisZ,
    ESBClipMatParamIndex_ExclusivePlaneNormal,
    ESBClipMatParamIndex_ExclusivePlaneOrigin,
    ESBClipMatParamIndex_Num,
};

