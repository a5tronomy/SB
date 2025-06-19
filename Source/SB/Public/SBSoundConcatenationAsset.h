#pragma once
#include "CoreMinimal.h"
#include "SBSoundPCMData.h"
#include "SBSoundProceduralAsset.h"
#include "SBSoundConcatenationAsset.generated.h"

class USoundWave;

UCLASS(EditInlineNew)
class SB_API USBSoundConcatenationAsset : public USBSoundProceduralAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<USoundWave*> SoundArray;
    
    UPROPERTY()
    TArray<FSBSoundPCMData> PCMDataArray;
    
    USBSoundConcatenationAsset();

};

