#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventBGMPrioritySectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventBGMPrioritySectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BGMVolumeName;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    SB_API FSBLevelSequenceEventBGMPrioritySectionData();
};

