#pragma once
#include "CoreMinimal.h"
#include "ESBUIRedDotState.h"
#include "SBTeleportCampData.generated.h"

USTRUCT()
struct FSBTeleportCampData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Index;
    
    UPROPERTY(EditAnywhere)
    bool bDim;
    
    UPROPERTY(EditAnywhere)
    FText CampName;
    
    UPROPERTY(EditAnywhere)
    FName CampAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    SB_API FSBTeleportCampData();
};

