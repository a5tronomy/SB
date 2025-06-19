#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterHUDEnhanceResult.generated.h"

USTRUCT()
struct FSBUILogicInitParameterHUDEnhanceResult : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ItemAlais;
    
    UPROPERTY()
    int32 ItemAmount;
    
    UPROPERTY()
    int32 NewLevel;
    
    UPROPERTY()
    int32 AddedItemAmount;
    
    UPROPERTY()
    uint32 ActorGuid;
    
    SB_API FSBUILogicInitParameterHUDEnhanceResult();
};

