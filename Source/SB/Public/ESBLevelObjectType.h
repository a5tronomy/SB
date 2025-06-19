#pragma once
#include "CoreMinimal.h"
#include "ESBLevelObjectType.generated.h"

UENUM()
enum ESBLevelObjectType {
    ESBLevelObjType_None,
    ESBLevelObjType_Zone,
    ESBLevelObjType_Env,
    ESBLevelObjType_Npc,
    ESBLevelObjType_Player,
    ESBLevelObjType_Trigger,
    ESBLevelObjType_Item,
    ESBLevelObjType_ZoneEventActor,
    ESBLevelObjType_WorldObject,
    ESBLevelObjType_Num,
};

