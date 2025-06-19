#pragma once
#include "CoreMinimal.h"
#include "ESBSoundDebuggingKey.h"
#include "SBSoundEventFixedLogData.generated.h"

USTRUCT()
struct FSBSoundEventFixedLogData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBSoundDebuggingKey Category;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    SB_API FSBSoundEventFixedLogData();
};

