#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorkshopPopupType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventWorkshopCoveredByPopup.generated.h"

USTRUCT()
struct FSBUIActionEventWorkshopCoveredByPopup : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUIWorkshopPopupType PopupType;
    
    SB_API FSBUIActionEventWorkshopCoveredByPopup();
};

