#pragma once
#include "CoreMinimal.h"
#include "SBHintProperty.generated.h"

USTRUCT()
struct FSBHintProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY()
    float DelayActivateTime;
    
    SB_API FSBHintProperty();
};

