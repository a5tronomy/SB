#pragma once
#include "CoreMinimal.h"
#include "SBCameraDollyPositionData.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FSBCameraDollyPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveVector* PositionCurve;
    
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    SB_API FSBCameraDollyPositionData();
};

