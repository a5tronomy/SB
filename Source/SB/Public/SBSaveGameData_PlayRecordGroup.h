#pragma once
#include "CoreMinimal.h"
#include "ESBQuestMissionType.h"
#include "SBSaveGameData_PlayRecordTaskList.h"
#include "SBSaveGameData_PlayRecordGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_PlayRecordGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName RecordGroupName;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBQuestMissionType>, FSBSaveGameData_PlayRecordTaskList> RecordTaskGroupMap;
    
    SB_API FSBSaveGameData_PlayRecordGroup();
};

