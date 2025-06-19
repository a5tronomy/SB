#pragma once
#include "CoreMinimal.h"
#include "ESBUIRedDotState.h"
#include "SBManualGroupListData.generated.h"

USTRUCT()
struct FSBManualGroupListData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseAcquisitionSkillString;
    
    UPROPERTY(EditAnywhere)
    FString GroupStringKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    SB_API FSBManualGroupListData();
};

