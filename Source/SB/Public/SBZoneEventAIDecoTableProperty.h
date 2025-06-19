#pragma once
#include "CoreMinimal.h"
#include "ESBBlackboardVarType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventAIDecoTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventAIDecoTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName TargetFilter;
    
    UPROPERTY(EditAnywhere)
    FName ValueKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBBlackboardVarType::Type> ValueType;
    
    UPROPERTY(EditAnywhere)
    float CustomValue1;
    
    UPROPERTY(EditAnywhere)
    float CustomValue2;
    
    UPROPERTY(EditAnywhere)
    float CustomValue3;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventAIDecoTableProperty();
};

