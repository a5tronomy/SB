#pragma once
#include "CoreMinimal.h"
#include "ESBShowSkillResultTableFieldType.generated.h"

UENUM()
enum ESBShowSkillResultTableFieldType {
    ESBShowSkillResultTableFieldType_Default,
    ESBShowSkillResultTableFieldType_WhenParry,
    ESBShowSkillResultTableFieldType_WhenJustParry,
    ESBShowSkillResultTableFieldType_WhenGuard,
    ESBShowSkillResultTableFieldType_WhenBreakGuard,
    ESBShowSkillResultTableFieldType_WhenPerfectParry,
};

