#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskEventActionType.generated.h"

UENUM()
enum ESBQuestTaskEventActionType {
    SBQuestTaskEventAction_None,
    SBQuestTaskEventAction_NpcSpawn,
    SBQuestTaskEventAction_NpcDespawn,
};

