#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_PlayRecordGroup.h"
#include "SBSaveGameData_PlayRecordData.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_PlayRecordData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBSaveGameData_PlayRecordGroup> ProgressRecordGroup;
    
    SB_API FSBSaveGameData_PlayRecordData();
};

