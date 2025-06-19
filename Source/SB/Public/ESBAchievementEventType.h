#pragma once
#include "CoreMinimal.h"
#include "ESBAchievementEventType.generated.h"

UENUM()
enum ESBAchievementEventType {
    ESBAchievementEventType_None,
    ESBAchievementEventType_Complete,
    ESBAchievementEventType_Acquire,
    ESBAchievementEventType_Interact,
    ESBAchievementEventType_Kill,
    ESBAchievementEventType_Enter,
    ESBAchievementEventType_LevelUp,
    ESBAchievementEventType_ChangeState,
    ESBAchievementEventType_Hit,
    ESBAchievementEventType_BeHit,
    ESBAchievementEventType_Remove,
    ESBAchievementEventType_CheckAmount,
    ESBAchievementEventType_Start,
    ESBAchievementEventType_Fishing,
    ESBAchievementEventType_ConsumeInShop,
    ESBAchievementEventType_SellItem,
    ESBAchievementEventType_BuyItem,
};

