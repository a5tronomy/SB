#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBSingleSoundTransitType.h"
#include "SBSingleSoundData.generated.h"

class USoundBase;

UCLASS()
class SB_API USBSingleSoundData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundWave;
    
    UPROPERTY(EditAnywhere)
    ESBSingleSoundTransitType TransitType;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool bKeepPlayingWhenLoading;
    
    UPROPERTY(EditAnywhere)
    bool bBGMEventResetWhenGameExit;
    
    UPROPERTY(Transient)
    USoundBase* OverrideSound;
    
    USBSingleSoundData();

};

