#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBSoundAdjuster.generated.h"

UCLASS()
class SB_API USBSoundAdjuster : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DefaultVolume;
    
    UPROPERTY(EditAnywhere)
    float BGMVolume;
    
    UPROPERTY(EditAnywhere)
    float AmbientVolume;
    
    USBSoundAdjuster();

};

