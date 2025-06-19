#pragma once
#include "CoreMinimal.h"
#include "SBWidgetNavigationEventData.generated.h"

USTRUCT(BlueprintType)
struct FSBWidgetNavigationEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FunctionName;
    
    SB_API FSBWidgetNavigationEventData();
};

