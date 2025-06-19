#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventSoundMixSectionData.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventSoundMixSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPopSoundMix;
    
    UPROPERTY(EditAnywhere)
    USoundMix* SoundMix;
    
    SB_API FSBLevelSequenceEventSoundMixSectionData();
};

