#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventAchieveNewQuestByFriendShip.generated.h"

USTRUCT()
struct FSBUIActionEventAchieveNewQuestByFriendShip : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString StringKey;
    
    SB_API FSBUIActionEventAchieveNewQuestByFriendShip();
};

