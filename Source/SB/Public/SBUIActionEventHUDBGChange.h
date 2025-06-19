#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDBGChange.generated.h"

USTRUCT()
struct FSBUIActionEventHUDBGChange : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool BGActive;
    
    SB_API FSBUIActionEventHUDBGChange();
};

