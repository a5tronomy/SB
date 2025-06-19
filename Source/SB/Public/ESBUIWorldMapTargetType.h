#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorldMapTargetType.generated.h"

UENUM()
enum ESBUIWorldMapTargetType {
    ESBUIWorldMapTargetType_None,
    ESBUIWorldMapTargetType_Epic,
    ESBUIWorldMapTargetType_Sub,
    ESBUIWorldMapTargetType_Request,
    ESBUIWorldMapTargetType_Portal,
    ESBUIWorldMapTargetType_TetraPod,
    ESBUIWorldMapTargetType_FullCamp,
    ESBUIWorldMapTargetType_SimpleCamp,
    ESBUIWorldMapTargetType_SaveVolume,
    ESBUIWorldMapTargetType_NewQuest,
    ESBUIWorldMapTargetType_EnvSpawn,
    ESBUIWorldMapTargetType_CharacterSpawn,
    ESBUIWorldMapTargetType_PhoneBooth,
    ESBUIWorldMapTargetType_CustomPin,
};

