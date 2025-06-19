#pragma once
#include "CoreMinimal.h"
#include "SBSoundPCMData.h"
#include "SBSoundProceduralAsset.h"
#include "SBSoundProceduralSimpleAsset.generated.h"

class USoundWave;

UCLASS(EditInlineNew)
class SB_API USBSoundProceduralSimpleAsset : public USBSoundProceduralAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundWave* SoundWave;
    
    UPROPERTY()
    FSBSoundPCMData PCMData;
    
    USBSoundProceduralSimpleAsset();

};

