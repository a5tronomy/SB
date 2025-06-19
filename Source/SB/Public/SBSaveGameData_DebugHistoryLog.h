#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_DebugHistoryLogSection.h"
#include "SBSaveGameData_DebugHistoryLog.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_DebugHistoryLog {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName KeyAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_DebugHistoryLogSection> LogSectionList;
    
    SB_API FSBSaveGameData_DebugHistoryLog();
};

