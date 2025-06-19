#pragma once
#include "CoreMinimal.h"
#include "SBBGMSoundTrackInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSBBGMSoundTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundCue;
    
    UPROPERTY(EditAnywhere)
    float BPM;
    
    UPROPERTY(EditAnywhere)
    bool StartDependencyBPM;
    
    UPROPERTY(EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(EditAnywhere)
    float PlayDelay;
    
    UPROPERTY(EditAnywhere)
    float StopDelay;
    
    SB_API FSBBGMSoundTrackInfo();
};

