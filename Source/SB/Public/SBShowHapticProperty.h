#pragma once
#include "CoreMinimal.h"
#include "ESBSoundParamType.h"
#include "SBShowHapticProperty.generated.h"

class USoundAttenuation;

USTRUCT(BlueprintType)
struct FSBShowHapticProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ESBSoundParamType> SubscribeSoundParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationOverride;
    
    SB_API FSBShowHapticProperty();
};

