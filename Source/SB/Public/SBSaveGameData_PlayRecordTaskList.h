#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_PlayRecordTaskData.h"
#include "SBSaveGameData_PlayRecordTaskList.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_PlayRecordTaskList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBSaveGameData_PlayRecordTaskData> TaskDataList;
    
    SB_API FSBSaveGameData_PlayRecordTaskList();
};

