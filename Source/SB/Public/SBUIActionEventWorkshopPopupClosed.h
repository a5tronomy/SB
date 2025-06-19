#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorkshopPopupType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventWorkshopPopupClosed.generated.h"

USTRUCT()
struct FSBUIActionEventWorkshopPopupClosed : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUIWorkshopPopupType PopupType;
    
    SB_API FSBUIActionEventWorkshopPopupClosed();
};

