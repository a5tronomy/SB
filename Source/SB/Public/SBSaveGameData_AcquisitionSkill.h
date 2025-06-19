#pragma once
#include "CoreMinimal.h"
#include "ESBSkillSlotType.h"
#include "SBSaveGameData_AcquisitionSkillObject.h"
#include "SBSaveGameData_AcquisitionSkill.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_AcquisitionSkill {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_AcquisitionSkillObject> AcquisitionSkillList;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBSkillSlotType>, uint32> SkillSlotMap;
    
    SB_API FSBSaveGameData_AcquisitionSkill();
};

