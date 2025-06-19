#pragma once
#include "CoreMinimal.h"
#include "SBIndicatorButtonData.h"
#include "SBIndicatorButtonDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FSBIndicatorButtonDataWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBIndicatorButtonData> Array;
    
    SB_API FSBIndicatorButtonDataWrapper();
};

