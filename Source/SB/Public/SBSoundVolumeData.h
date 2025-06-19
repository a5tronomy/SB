#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBSoundVolumeChannel.h"
#include "ESBSoundVolumeControlType.h"
#include "SBSoundControlData.h"
#include "SBSoundVolumeData.generated.h"

class USoundClass;

UCLASS()
class SB_API USBSoundVolumeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ESBSoundVolumeControlType, FSBSoundControlData> SoundControlDataMap;
    
    UPROPERTY(EditAnywhere)
    TMap<ESBSoundVolumeChannel, USoundClass*> SoundChannelData;
    
    USBSoundVolumeData();

};

