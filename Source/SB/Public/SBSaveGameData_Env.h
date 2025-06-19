#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_WorldContainer.h"
#include "SBSaveGameData_ZoneContainer.h"
#include "SBSaveGameData_Env.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Env {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_WorldContainer> WorldContainerList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneContainer> ZoneContainerList;
    
    SB_API FSBSaveGameData_Env();
};

