#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_AcquisitionSkillObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_AcquisitionSkillObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AcquisitionSkillAlias;
    
    SB_API FSBSaveGameData_AcquisitionSkillObject();
};

