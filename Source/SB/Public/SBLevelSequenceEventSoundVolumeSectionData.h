#pragma once
#include "CoreMinimal.h"
#include "ESBSoundVolumeChannel.h"
#include "SBLevelSequenceEventSoundVolumeSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventSoundVolumeSectionData {
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
    
    SB_API FSBLevelSequenceEventSoundVolumeSectionData();
};

