#pragma once
#include "CoreMinimal.h"
#include "SBAIWorldNodeBehaviorIterateShowInfo.generated.h"

class USBShowData;

USTRUCT(BlueprintType)
struct FSBAIWorldNodeBehaviorIterateShowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    USBShowData* Show;
    
    SB_API FSBAIWorldNodeBehaviorIterateShowInfo();
};

