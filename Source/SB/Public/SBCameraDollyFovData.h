#pragma once
#include "CoreMinimal.h"
#include "SBCameraDollyFovData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBCameraDollyFovData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* FovCurve;
    
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    SB_API FSBCameraDollyFovData();
};

