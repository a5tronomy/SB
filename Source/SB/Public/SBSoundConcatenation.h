#pragma once
#include "CoreMinimal.h"
#include "SBSoundPCMData.h"
#include "SBSoundProcedural.h"
#include "SBSoundConcatenation.generated.h"

class USBSoundConcatenationAsset;
class USoundWave;

UCLASS(EditInlineNew)
class SB_API USBSoundConcatenation : public USBSoundProcedural {
    GENERATED_BODY()
public:
    UPROPERTY()
    USBSoundConcatenationAsset* ByCreatedSoundAsset;
    
    UPROPERTY()
    TArray<USoundWave*> SoundArray;
    
    UPROPERTY()
    TArray<FSBSoundPCMData> PCMDataArray;
    
    USBSoundConcatenation();

};

