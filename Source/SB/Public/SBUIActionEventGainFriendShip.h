#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventGainFriendShip.generated.h"

USTRUCT()
struct FSBUIActionEventGainFriendShip : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float PrevTotalFriendShip;
    
    UPROPERTY()
    float CurrTotalFriendShip;
    
    UPROPERTY()
    int32 PrevFriendShipLevel;
    
    UPROPERTY()
    int32 CurrFriendShipLevel;
    
    SB_API FSBUIActionEventGainFriendShip();
};

