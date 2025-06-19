#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_QuestTask.h"
#include "SBSaveGameData_QuestTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_QuestTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_QuestTask> TaskList;
    
    SB_API FSBSaveGameData_QuestTaskInfo();
};

