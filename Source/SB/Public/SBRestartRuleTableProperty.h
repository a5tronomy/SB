#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBRestartRuleTableProperty.generated.h"

USTRUCT()
struct FSBRestartRuleTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName MainLevelTarget;
    
    UPROPERTY(EditAnywhere)
    FName LookAtLevelTarget;
    
    UPROPERTY(EditAnywhere)
    float SafetyDistance;
    
    UPROPERTY(EditAnywhere)
    float OutsideLimitTime;
    
    UPROPERTY(EditAnywhere)
    FName OutSideLevelSequence;
    
    UPROPERTY(EditAnywhere)
    FName OutSideTheaterEvent;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBRestartRuleTableProperty();
};

