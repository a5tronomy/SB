#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_PlayRecordTaskData.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_PlayRecordTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSuccessTask;
    
    UPROPERTY(EditAnywhere)
    FName DataAlias;
    
    SB_API FSBSaveGameData_PlayRecordTaskData();
};

