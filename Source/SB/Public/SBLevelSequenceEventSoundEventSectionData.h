#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventSoundEventSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventSoundEventSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SoundEventAlias;
    
    SB_API FSBLevelSequenceEventSoundEventSectionData();
};

