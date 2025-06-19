#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_Theater.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Theater {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<FName> LevelSeqPlayingSet;
    
    SB_API FSBSaveGameData_Theater();
};

