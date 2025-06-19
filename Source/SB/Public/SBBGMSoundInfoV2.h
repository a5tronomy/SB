#pragma once
#include "CoreMinimal.h"
#include "Sound/QuartzQuantizationUtilities.h"
#include "SBBGMSoundInfoV2.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSBBGMSoundInfoV2 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundBase;
    
    UPROPERTY(EditAnywhere)
    FName KeepPlayTimeKey;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> IntParams;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    float FadeIn;
    
    UPROPERTY(EditAnywhere)
    float FadeOut;
    
    UPROPERTY(EditAnywhere)
    float BPM;
    
    UPROPERTY(EditAnywhere)
    FQuartzClockSettings ClockSetting;
    
    UPROPERTY(EditAnywhere)
    bool PlayMetronomeForDebug;
    
    UPROPERTY(EditAnywhere)
    bool PauseWhenOpenGameMenu;
    
    SB_API FSBBGMSoundInfoV2();
};

