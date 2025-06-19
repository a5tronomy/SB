#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBShowDecalParamCurve.generated.h"

USTRUCT(BlueprintType)
struct FSBShowDecalParamCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve;
    
    SB_API FSBShowDecalParamCurve();
};

