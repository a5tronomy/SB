#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_TrainingRoom.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_TrainingRoom {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bFirstTrainingRoom;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int8> FirstTimeAcquisionSkill;
    
    SB_API FSBSaveGameData_TrainingRoom();
};

