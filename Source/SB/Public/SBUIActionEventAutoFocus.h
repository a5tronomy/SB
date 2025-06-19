#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventAutoFocus.generated.h"

USTRUCT()
struct FSBUIActionEventAutoFocus : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsEveOutSide;
    
    SB_API FSBUIActionEventAutoFocus();
};

