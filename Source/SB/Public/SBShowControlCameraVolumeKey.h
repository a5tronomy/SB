#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowControlCameraVolumeKey.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class SB_API USBShowControlCameraVolumeKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnly;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AddOffsetYCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AddOffsetXCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AddFovCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* YawToPivotCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* PitchToPivotCurve;
    
    UPROPERTY(EditAnywhere)
    float InitialTime;
    
    UPROPERTY(EditAnywhere)
    bool bHoldDuration;
    
    UPROPERTY(EditAnywhere)
    float HoldDuration;
    
    UPROPERTY(EditAnywhere)
    bool bEnableOverrideSameValue;
    
    UPROPERTY(EditAnywhere)
    float DelayStartDuration;
    
    USBShowControlCameraVolumeKey();

};

