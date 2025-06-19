#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskState.h"
#include "SBSaveGameData_QuestTask.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_QuestTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TaskAlias;
    
    UPROPERTY(EditAnywhere)
    int32 CurrentValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestTaskState> TaskState;
    
    UPROPERTY(EditAnywhere)
    int32 CompleteOrder;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> CustomIntMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> CustomFloatMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ChildTaskAliasList;
    
    SB_API FSBSaveGameData_QuestTask();
};

