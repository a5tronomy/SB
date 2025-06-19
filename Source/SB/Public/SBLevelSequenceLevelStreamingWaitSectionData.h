#pragma once
#include "CoreMinimal.h"
#include "SBTheaterLevelSequenceSkipFadeParam.h"
#include "SBLevelSequenceLevelStreamingWaitSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceLevelStreamingWaitSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBTheaterLevelSequenceSkipFadeParam FadeParam;
    
    SB_API FSBLevelSequenceLevelStreamingWaitSectionData();
};

