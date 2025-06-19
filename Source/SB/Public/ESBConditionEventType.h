#pragma once
#include "CoreMinimal.h"
#include "ESBConditionEventType.generated.h"

UENUM()
enum ESBConditionEventType {
    ESBCondition_None = -1,
    ESBCondition_EnterZone = 0,
    ESBCondition_LeaveZone,
    ESBCondition_AttachEffect,
    ESBCondition_DetachEffect,
    ESBCondition_CharacterDead,
    ESBCondition_UseSkill,
    ESBCondition_TouchTrigger,
    ESBCondition_SpawnActor,
    ESBCondition_SpawnItem,
    ESBCondition_EngineEventTheater,
    ESBCondition_AcquireItem,
    ESBCondition_FinishInteraction,
    ESBCondition_AcquireQuest,
    ESBCondition_UpdateQuest,
    ESBCondition_CompleteQuest,
    ESBCondition_FailQuest,
    ESBCondition_QuestPathProgress,
    ESBCondition_ChangeEnvState,
    ESBCondition_FinishPuzzle,
    ESBCondition_FinishGrab,
    ESBCondition_CompleteInitializeZone,
    ESBCondition_Scan,
    ESBCondition_UpdateAchievement,
    ESBCondition_ChangeStateAreaVolume,
    ESBCondition_InteractionChangeCustomValue,
    ESBCondition_Num,
};

