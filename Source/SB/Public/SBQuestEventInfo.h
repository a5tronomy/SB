#pragma once
#include "CoreMinimal.h"
#include "SBQuestEventInfo.generated.h"

USTRUCT()
struct FSBQuestEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventAlias;
    
    SB_API FSBQuestEventInfo();
};

