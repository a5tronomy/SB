#pragma once
#include "CoreMinimal.h"
#include "ESBBossChallengePresetType.h"
#include "SBSaveOptionData_ActorEquipment.h"
#include "SBSaveOptionData_Preset.generated.h"

USTRUCT()
struct FSBSaveOptionData_Preset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBBossChallengePresetType BossChallengePresetType;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_ActorEquipment Equipment;
    
    SB_API FSBSaveOptionData_Preset();
};

