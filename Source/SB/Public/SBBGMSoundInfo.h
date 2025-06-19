#pragma once
#include "CoreMinimal.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "ESBSoundRestartType.h"
#include "SBBGMSoundInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSBBGMSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundCue;
    
    UPROPERTY(EditAnywhere)
    float PlayDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool UseQuartzSystem;
    
    UPROPERTY(EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(EditAnywhere)
    ESBSoundRestartType RestartType;
    
    UPROPERTY(EditAnywhere)
    float StopDelayTime;
    
    UPROPERTY(EditAnywhere)
    float BPM;
    
    UPROPERTY(EditAnywhere)
    FQuartzClockSettings ClockSetting;
    
    UPROPERTY(EditAnywhere)
    EQuartzCommandQuantization QuartzClockEventBoundary;
    
    UPROPERTY(EditAnywhere)
    uint32 StopDelayBeat;
    
    UPROPERTY(EditAnywhere)
    bool PlayMetronomeForDebug;
    
    SB_API FSBBGMSoundInfo();
};

