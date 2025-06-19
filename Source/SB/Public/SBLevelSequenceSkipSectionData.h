#pragma once
#include "CoreMinimal.h"
#include "SBTheaterLevelSequenceSkipFadeParam.h"
#include "SBLevelSequenceSkipSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceSkipSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBTheaterLevelSequenceSkipFadeParam FadeParam;
    
    SB_API FSBLevelSequenceSkipSectionData();
};

