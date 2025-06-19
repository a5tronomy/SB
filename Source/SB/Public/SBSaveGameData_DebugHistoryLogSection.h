#pragma once
#include "CoreMinimal.h"
#include "ESBDebugHistoryLogType.h"
#include "SBSaveGameData_DebugHistoryLogSection.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_DebugHistoryLogSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDebugHistoryLogType> LogSectionType;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> LogList;
    
    SB_API FSBSaveGameData_DebugHistoryLogSection();
};

