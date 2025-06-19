#pragma once
#include "CoreMinimal.h"
#include "ESBGameOptionHUDSizeType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventHUDSizeChange.generated.h"

USTRUCT()
struct FSBUIActionEventHUDSizeChange : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBGameOptionHUDSizeType SizeType;
    
    SB_API FSBUIActionEventHUDSizeChange();
};

