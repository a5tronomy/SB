#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBShowVectorCurve.generated.h"

USTRUCT(BlueprintType)
struct FSBShowVectorCurve {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve XCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve YCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ZCurve;
    
public:
    SB_API FSBShowVectorCurve();
};

