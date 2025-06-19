#pragma once
#include "CoreMinimal.h"
#include "ESBActorCondition.generated.h"

UENUM()
enum ESBActorCondition {
    ESBActorCondition_None,
    ESBActorCondition_Jumping,
    ESBActorCondition_WallRun,
    ESBActorCondition_Falling,
    ESBActorCondition_OnGround,
    ESBActorCondition_Sprint,
    ESBActorCondition_Run,
    ESBActorCondition_Moving,
    ESBActorCondition_BlockMove,
    ESBActorCondition_BlockSkill,
    ESBActorCondition_Stealth,
    ESBActorCondition_BattleMode,
};

