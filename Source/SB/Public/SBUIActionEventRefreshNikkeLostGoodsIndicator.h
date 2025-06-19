#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventRefreshNikkeLostGoodsIndicator.generated.h"

USTRUCT()
struct FSBUIActionEventRefreshNikkeLostGoodsIndicator : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> AddedNikkeLostGoodsArray;
    
    SB_API FSBUIActionEventRefreshNikkeLostGoodsIndicator();
};

