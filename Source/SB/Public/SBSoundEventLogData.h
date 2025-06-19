#pragma once
#include "CoreMinimal.h"
#include "SBSoundEventLogData.generated.h"

USTRUCT()
struct FSBSoundEventLogData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString StringValue;
    
    SB_API FSBSoundEventLogData();
};

