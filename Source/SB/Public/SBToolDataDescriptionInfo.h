#pragma once
#include "CoreMinimal.h"
#include "SBToolDataDescriptionInfo.generated.h"

class ULevelSequence;

USTRUCT()
struct FSBToolDataDescriptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(EditAnywhere)
    FString TriggerDescription;
    
    SB_API FSBToolDataDescriptionInfo();
};

