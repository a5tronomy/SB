#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBZoneEnvProgressInfo.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct FSBZoneEnvProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* ProgressSpline;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve InterpGraph;
    
    UPROPERTY(Transient)
    float CurrentProgress;
    
    UPROPERTY(Transient)
    float ProgressMaxValue;
    
    SB_API FSBZoneEnvProgressInfo();
};

