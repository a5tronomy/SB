#pragma once
#include "CoreMinimal.h"
#include "ESBBossChallengePresetType.h"
#include "SBSaveOptionData_ActorEquipment.h"
#include "SBSaveOptionData_ActorEquipmentDiary.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_ActorEquipmentDiary {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ESBBossChallengePresetType, FSBSaveOptionData_ActorEquipment> PresetAbilityEquipMap;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_ActorEquipment LastGameAbilityEquip;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_ActorEquipment AppearanceEquip;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_ActorEquipment LastGameAppearanceEquip;
    
    SB_API FSBSaveOptionData_ActorEquipmentDiary();
};

