#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowTimeScaleKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowTimeScaleKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float TimeScale;
    
    UPROPERTY(EditAnywhere)
    bool bApplyImmediately;
    
    USBShowTimeScaleKey();

};

