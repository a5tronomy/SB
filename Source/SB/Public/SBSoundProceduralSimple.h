#pragma once
#include "CoreMinimal.h"
#include "SBSoundPCMData.h"
#include "SBSoundProcedural.h"
#include "SBSoundProceduralSimple.generated.h"

class USBSoundProceduralSimpleAsset;
class USoundWave;

UCLASS(EditInlineNew)
class SB_API USBSoundProceduralSimple : public USBSoundProcedural {
    GENERATED_BODY()
public:
    UPROPERTY()
    USBSoundProceduralSimpleAsset* ByCreatedSoundAsset;
    
    UPROPERTY()
    USoundWave* SoundWave;
    
    UPROPERTY()
    FSBSoundPCMData PCMData;
    
    USBSoundProceduralSimple();

};

