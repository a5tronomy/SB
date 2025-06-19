#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_QuestTaskGroup.h"
#include "SBSaveGameData_QuestObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_QuestObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName QuestAlias;
    
    UPROPERTY(EditAnywhere)
    int32 QuestState;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_QuestTaskGroup> QuestTaskGroupList;
    
    UPROPERTY(EditAnywhere)
    int32 PathIndex;
    
    UPROPERTY(EditAnywhere)
    int32 PathNodeIndex;
    
    UPROPERTY(EditAnywhere)
    int64 LastUpdateTimestamp;
    
    SB_API FSBSaveGameData_QuestObject();
};

