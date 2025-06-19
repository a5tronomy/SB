#pragma once
#include "CoreMinimal.h"
#include "ESBConditionEventType.h"
#include "ESBConditionResultType.h"
#include "SBTablePropertyBase.h"
#include "SBConditionTriggerTableProperty.generated.h"

USTRUCT()
struct FSBConditionTriggerTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionEventType> ConditionType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionResultType> ResultType;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBConditionTriggerTableProperty();
};

