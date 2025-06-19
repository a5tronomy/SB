#pragma once
#include "CoreMinimal.h"
#include "ESBShowControlLagSpeedTarget.h"
#include "SBShowKey.h"
#include "SBShowControlCamLagSpeedKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowControlCamLagSpeedKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnly;
    
    UPROPERTY(EditAnywhere)
    float TargetSpeed;
    
    UPROPERTY(EditAnywhere)
    float TargetMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float TargetLockOnCameraBlendScale;
    
    UPROPERTY(EditAnywhere)
    float BlendSpeed;
    
    UPROPERTY(EditAnywhere)
    float BlendOutDuration;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowControlLagSpeedTarget> PlayTarget;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bApplyToLockOnCameraPitch;
    
    USBShowControlCamLagSpeedKey();

};

