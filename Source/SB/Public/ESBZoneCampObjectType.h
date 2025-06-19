#pragma once
#include "CoreMinimal.h"
#include "ESBZoneCampObjectType.generated.h"

UENUM()
enum ESBZoneCampObjectType {
    ESBZoneCampObjectType_None,
    ESBZoneCampObjectType_VendingMachine,
    ESBZoneCampObjectType_FullCampTeleportMachine,
    ESBZoneCampObjectType_TetrapodTeleportMachine,
    ESBZoneCampObjectType_SkillMachine,
    ESBZoneCampObjectType_Turntable,
    ESBZoneCampObjectType_Storage,
    ESBZoneCampObjectType_Chair,
};

