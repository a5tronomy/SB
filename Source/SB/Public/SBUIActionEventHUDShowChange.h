#pragma once
#include "CoreMinimal.h"
#include "ESBGameOptionHUDShowType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDShowChange.generated.h"

USTRUCT()
struct FSBUIActionEventHUDShowChange : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBGameOptionHUDShowType ShowType;
    
    SB_API FSBUIActionEventHUDShowChange();
};

