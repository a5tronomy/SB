#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskGroupState.h"
#include "SBSaveGameData_QuestTask.h"
#include "SBSaveGameData_QuestTaskInfo.h"
#include "SBSaveGameData_QuestTaskGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_QuestTaskGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TaskGroupAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestTaskGroupState> TaskGroupState;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, int32> TaskValueMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_QuestTaskInfo> TaskInfoList;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSaveGameData_QuestTask> AllChildTaskList;
    
    UPROPERTY(EditAnywhere)
    int32 PathIndex;
    
    UPROPERTY(EditAnywhere)
    int32 PathNodeIndex;
    
    SB_API FSBSaveGameData_QuestTaskGroup();
};

