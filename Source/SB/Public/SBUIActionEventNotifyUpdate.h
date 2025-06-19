#pragma once
#include "CoreMinimal.h"
#include "ESBUIHUDNotifyUpdateType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventNotifyUpdate.generated.h"

USTRUCT()
struct FSBUIActionEventNotifyUpdate : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName UpdateAlias;
    
    UPROPERTY()
    FName AchievementAlias;
    
    UPROPERTY()
    ESBUIHUDNotifyUpdateType UpdateType;
    
    SB_API FSBUIActionEventNotifyUpdate();
};

