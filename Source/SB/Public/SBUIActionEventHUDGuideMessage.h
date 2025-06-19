#pragma once
#include "CoreMinimal.h"
#include "ESBUIGuideMessageEventType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDGuideMessage.generated.h"

USTRUCT()
struct FSBUIActionEventHUDGuideMessage : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GuideDataAlias;
    
    UPROPERTY()
    TEnumAsByte<ESBUIGuideMessageEventType> GuideEventType;
    
    SB_API FSBUIActionEventHUDGuideMessage();
};

