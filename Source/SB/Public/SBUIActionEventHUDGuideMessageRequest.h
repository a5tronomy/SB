#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDGuideMessageRequest.generated.h"

USTRUCT()
struct FSBUIActionEventHUDGuideMessageRequest : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GuideDataAlias;
    
    SB_API FSBUIActionEventHUDGuideMessageRequest();
};

