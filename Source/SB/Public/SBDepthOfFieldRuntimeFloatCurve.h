#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBDepthOfFieldRuntimeFloatCurve.generated.h"

USTRUCT(BlueprintType)
struct FSBDepthOfFieldRuntimeFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseCurve;
    
    UPROPERTY(EditAnywhere)
    bool bCurveNormalizedAge;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve;
    
    SB_API FSBDepthOfFieldRuntimeFloatCurve();
};

