#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDItemVisible.generated.h"

USTRUCT()
struct FSBUIActionEventHUDItemVisible : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Visible;
    
    SB_API FSBUIActionEventHUDItemVisible();
};

