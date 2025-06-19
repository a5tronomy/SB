#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBTheaterInteractionSelectData.h"
#include "SBTheaterInteractionData.generated.h"

USTRUCT()
struct FSBTheaterInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FSBTheaterInteractionSelectData> SelectMap;
    
    UPROPERTY()
    FGuid Guid;
    
    SB_API FSBTheaterInteractionData();
};

