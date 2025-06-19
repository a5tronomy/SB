#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorldMapTargetQuestState.generated.h"

UENUM()
enum ESBUIWorldMapTargetQuestState {
    ESBUIWorldMapTargetQuestState_None,
    ESBUIWorldMapTargetQuestState_NotTrackingNotComplete,
    ESBUIWorldMapTargetQuestState_TrackingNotComplete,
    ESBUIWorldMapTargetQuestState_NotTrackingComplete,
    ESBUIWorldMapTargetQuestState_TrackingComplete,
};

