#pragma once
#include "CoreMinimal.h"
#include "SBBehaviorIterateShowInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBBehaviorIterateShowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    FString ShowPath;
    
    SB_API FSBBehaviorIterateShowInfo();
};

