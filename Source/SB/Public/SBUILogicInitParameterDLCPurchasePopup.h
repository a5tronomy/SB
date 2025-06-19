#pragma once
#include "CoreMinimal.h"
#include "ESBUIDLCPurchasePopupType.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterDLCPurchasePopup.generated.h"

USTRUCT()
struct FSBUILogicInitParameterDLCPurchasePopup : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUIDLCPurchasePopupType DLCPurchasePopupType;
    
    SB_API FSBUILogicInitParameterDLCPurchasePopup();
};

