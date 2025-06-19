#pragma once
#include "CoreMinimal.h"
#include "ESBUILogicType.h"
#include "ESBUISettingPopupType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventCloseSettingPopup.generated.h"

USTRUCT()
struct FSBUIActionEventCloseSettingPopup : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUISettingPopupType SettingPopupType;
    
    UPROPERTY()
    TEnumAsByte<ESBUILogicType> UILogicType;
    
    SB_API FSBUIActionEventCloseSettingPopup();
};

