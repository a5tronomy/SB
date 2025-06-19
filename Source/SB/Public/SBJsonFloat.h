#pragma once
#include "CoreMinimal.h"
#include "SBJsonFloat.generated.h"

USTRUCT()
struct FSBJsonFloat {
    GENERATED_BODY()
public:
    UPROPERTY()
    float V;
    
    SB_API FSBJsonFloat();
};

