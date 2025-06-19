#pragma once
#include "CoreMinimal.h"
#include "SBMultiPlayPlayerData.generated.h"

USTRUCT()
struct FSBMultiPlayPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PlayerName;
    
    UPROPERTY(EditAnywhere)
    int32 Score;
    
    SB_API FSBMultiPlayPlayerData();
};

