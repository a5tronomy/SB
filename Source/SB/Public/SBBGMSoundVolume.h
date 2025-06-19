#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBBGMSoundVolume.generated.h"

class USBBGMSoundTrack;

UCLASS()
class SB_API ASBBGMSoundVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bActiveVolume;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float ChangedPeaceDelay;
    
    UPROPERTY(EditAnywhere)
    USBBGMSoundTrack* BGMTrack;
    
    ASBBGMSoundVolume(const FObjectInitializer& ObjectInitializer);

};

