#pragma once
#include "CoreMinimal.h"
#include "SBBGMEndSoundInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSBBGMEndSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundCue;
    
    UPROPERTY(EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float OverlapTime;
    
    UPROPERTY(EditAnywhere)
    uint32 OverlapBeat;
    
    SB_API FSBBGMEndSoundInfo();
};

