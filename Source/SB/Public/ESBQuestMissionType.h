#pragma once
#include "CoreMinimal.h"
#include "ESBQuestMissionType.generated.h"

UENUM()
enum ESBQuestMissionType {
    ESBMission_None,
    ESBMission_KillTarget,
    ESBMission_EnterZone,
    ESBMission_LeaveZone,
    ESBMission_EnterTrigger,
    ESBMission_LeaveTrigger,
    ESBMission_DelayTime,
    ESBMission_ActorInBounds,
    ESBMission_RequireItem,
    ESBMission_Interaction,
    ESBMission_EnvState,
    ESBMission_TaskCondition,
    ESBMission_Counter,
    ESBMission_Scan,
    ESBMission_Achievement,
    ESBMission_ChangeStateAreaVolume,
    ESBMission_InteractionChangeCustomValue,
    ESBMission_RequestCompleteCondition,
    ESBMission_HitCameraVolume,
    ESBMission_Num,
};

