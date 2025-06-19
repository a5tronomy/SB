#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDVisible.generated.h"

USTRUCT()
struct FSBUIActionEventHUDVisible : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY()
    FName Tag;
    
    SB_API FSBUIActionEventHUDVisible();
};

