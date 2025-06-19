#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventShowSpecialRewardUI.generated.h"

USTRUCT()
struct FSBUIActionEventShowSpecialRewardUI : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventShowSpecialRewardUI();
};

