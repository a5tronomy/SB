#pragma once
#include "CoreMinimal.h"
#include "ESBUISoundDebuggerStatCategory.h"
#include "SBSoundStatLogData.generated.h"

USTRUCT()
struct FSBSoundStatLogData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBUISoundDebuggerStatCategory Category;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    SB_API FSBSoundStatLogData();
};

