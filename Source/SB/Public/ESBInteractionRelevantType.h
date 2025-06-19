#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionRelevantType.generated.h"

UENUM()
enum ESBInteractionRelevantType {
    ESBInteractionRelevant_None,
    ESBInteractionRelevant_AcquireEpicQuest,
    ESBInteractionRelevant_AcquireSubQuest,
    ESBInteractionRelevant_UpdateEpicQuest,
    ESBInteractionRelevant_UpdateSubQuest,
    ESBInteractionRelevant_Enhance,
    ESBInteractionRelevant_Exospine,
    ESBInteractionRelevant_PlayerSkill,
    ESBInteractionRelevant_DronUpgrade,
    ESBInteractionRelevant_CraftNanosuit,
    ESBInteractionRelevant_UITutorial,
    ESBInteractionRelevant_FirstInteraction,
    ESBInteractionRelevant_UnlockSkillShow,
};

