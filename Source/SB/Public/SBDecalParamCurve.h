#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBDecalParamCurve.generated.h"

USTRUCT(BlueprintType)
struct FSBDecalParamCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve;
    
    SB_API FSBDecalParamCurve();
};

