#pragma once
#include "CoreMinimal.h"
#include "ESBInputActionItemUseType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventItemUse.generated.h"

USTRUCT()
struct FSBUIActionEventItemUse : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBInputActionItemUseType ItemUseType;
    
    UPROPERTY()
    bool bPressed;
    
    SB_API FSBUIActionEventItemUse();
};

