#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventActionAssistStop.generated.h"

USTRUCT()
struct FSBUIActionEventActionAssistStop : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 ActorGuid;
    
public:
    SB_API FSBUIActionEventActionAssistStop();
};

