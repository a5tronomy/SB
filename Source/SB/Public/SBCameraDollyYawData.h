#pragma once
#include "CoreMinimal.h"
#include "SBCameraDollyYawData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBCameraDollyYawData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* YawCurve;
    
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    SB_API FSBCameraDollyYawData();
};

