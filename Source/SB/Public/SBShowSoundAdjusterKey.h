#pragma once
#include "CoreMinimal.h"
#include "ESBSoundVolumeChannel.h"
#include "SBShowKey.h"
#include "SBShowSoundAdjusterKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowSoundAdjusterKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBSoundVolumeChannel SoundVolumeChannel;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideFadeTime;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    USBShowSoundAdjusterKey();

};

