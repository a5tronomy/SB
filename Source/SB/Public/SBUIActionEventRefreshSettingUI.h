#pragma once
#include "CoreMinimal.h"
#include "ESBGameOptionType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventRefreshSettingUI.generated.h"

USTRUCT()
struct FSBUIActionEventRefreshSettingUI : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ESBGameOptionType> OptionTypeArray;
    
    SB_API FSBUIActionEventRefreshSettingUI();
};

