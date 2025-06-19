#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_NikkeStageInfo.h"
#include "SBSaveGameData_Nikke.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Nikke {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_NikkeStageInfo> NikkeStageInfoList;
    
    SB_API FSBSaveGameData_Nikke();
};

