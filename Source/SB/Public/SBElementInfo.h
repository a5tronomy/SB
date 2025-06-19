#pragma once
#include "CoreMinimal.h"
#include "SBElementInfo.generated.h"

USTRUCT()
struct FSBElementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ElementAmount;
    
    UPROPERTY(EditAnywhere)
    float MaxAmount;
    
    SB_API FSBElementInfo();
};

