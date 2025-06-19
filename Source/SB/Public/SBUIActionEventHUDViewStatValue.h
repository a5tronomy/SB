#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDViewStatValue.generated.h"

USTRUCT()
struct FSBUIActionEventHUDViewStatValue : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool ViewStatValueActive;
    
    SB_API FSBUIActionEventHUDViewStatValue();
};

