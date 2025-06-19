#pragma once
#include "CoreMinimal.h"
#include "SBCameraEventBaseScreenPosition.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBCameraEventBaseScreenPosition {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCurveFloat* AddOffsetYCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* AddOffsetXCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* AddFovCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* YawToPivotCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* PitchToPivotCurve;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    float CurrentDuration;
    
    UPROPERTY(Transient)
    bool bHoldDuration;
    
    UPROPERTY(Transient)
    float HoldDuration;
    
    UPROPERTY(Transient)
    bool bInverse;
    
    SB_API FSBCameraEventBaseScreenPosition();
};

