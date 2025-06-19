#pragma once
#include "CoreMinimal.h"
#include "SBAnimNotifyHapticProperty.generated.h"

class USoundAttenuation;

USTRUCT(BlueprintType)
struct FSBAnimNotifyHapticProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationOverride;
    
    SB_API FSBAnimNotifyHapticProperty();
};

