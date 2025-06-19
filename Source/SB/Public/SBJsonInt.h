#pragma once
#include "CoreMinimal.h"
#include "SBJsonInt.generated.h"

USTRUCT()
struct FSBJsonInt {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 V;
    
    SB_API FSBJsonInt();
};

