#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterObjectStateType.generated.h"

UENUM()
enum ESBCharacterObjectStateType {
    ESBCharacterObjState_None,
    ESBCharacterObjState_PreSpawn,
    ESBCharacterObjState_PostSpawn,
    ESBCharacterObjState_Spawn,
};

