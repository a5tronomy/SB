#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBShowMaterialParamCurve.generated.h"

USTRUCT(BlueprintType)
struct FSBShowMaterialParamCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    bool bCurveNormalizedAge;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve;
    
    SB_API FSBShowMaterialParamCurve();
};

