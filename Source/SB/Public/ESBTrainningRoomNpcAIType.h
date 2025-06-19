#pragma once
#include "CoreMinimal.h"
#include "ESBTrainningRoomNpcAIType.generated.h"

UENUM()
enum ESBTrainningRoomNpcAIType {
    TrainningRoomNpcAI_None,
    TrainningRoomNpcAI_SkillStop,
    TrainningRoomNpcAI_SkillNormal,
    TrainningRoomNpcAI_SkillSpecial,
    TrainningRoomNpcAI_SkillAll,
    TrainningRoomNpcAI_Num,
};

