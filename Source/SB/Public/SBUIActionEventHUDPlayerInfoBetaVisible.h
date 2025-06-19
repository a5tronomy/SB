#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDPlayerInfoBetaVisible.generated.h"

USTRUCT()
struct FSBUIActionEventHUDPlayerInfoBetaVisible : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Visible;
    
    SB_API FSBUIActionEventHUDPlayerInfoBetaVisible();
};

