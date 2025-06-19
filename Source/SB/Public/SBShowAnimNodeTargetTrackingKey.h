#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowAnimNodeTargetTrackingKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowAnimNodeTargetTrackingKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StartBone;
    
    UPROPERTY(EditAnywhere)
    FName EndBone;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float TrackingTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    USBShowAnimNodeTargetTrackingKey();

};

