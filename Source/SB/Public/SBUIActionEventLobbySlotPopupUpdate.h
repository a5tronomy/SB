#pragma once
#include "CoreMinimal.h"
#include "ESBUISavePageType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventLobbySlotPopupUpdate.generated.h"

USTRUCT()
struct FSBUIActionEventLobbySlotPopupUpdate : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUISavePageType SlotPopupType;
    
    SB_API FSBUIActionEventLobbySlotPopupUpdate();
};

