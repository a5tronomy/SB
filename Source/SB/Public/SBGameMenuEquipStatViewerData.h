#pragma once
#include "CoreMinimal.h"
#include "SBGameMenuEquipStatViewerData.generated.h"

USTRUCT()
struct FSBGameMenuEquipStatViewerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText StatName;
    
    UPROPERTY(EditAnywhere)
    FText StatValue;
    
    SB_API FSBGameMenuEquipStatViewerData();
};

