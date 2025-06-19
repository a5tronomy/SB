#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowControlLockOnBlendKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowControlLockOnBlendKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnly;
    
    UPROPERTY(EditAnywhere)
    float TargetLockOnCameraBlendScale;
    
    UPROPERTY(EditAnywhere)
    float BlendOutDuration;
    
    USBShowControlLockOnBlendKey();

};

