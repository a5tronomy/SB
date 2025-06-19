#pragma once
#include "CoreMinimal.h"
#include "SBCameraDollyPitchData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBCameraDollyPitchData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* PitchCurve;
    
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    SB_API FSBCameraDollyPitchData();
};

