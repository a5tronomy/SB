#pragma once
#include "CoreMinimal.h"
#include "ESBUIActionAssistSignalType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventActionAssistStart.generated.h"

USTRUCT()
struct FSBUIActionEventActionAssistStart : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ESBUIActionAssistSignalType ActionAssistSignalType;
    
    UPROPERTY()
    uint32 ActorGuid;
    
public:
    SB_API FSBUIActionEventActionAssistStart();
};

