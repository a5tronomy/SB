#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBLoadingScreenGameTipTableProperty.generated.h"

USTRUCT()
struct FSBLoadingScreenGameTipTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FName TipGroup;
    
    UPROPERTY(EditAnywhere)
    FName Condition;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBLoadingScreenGameTipTableProperty();
};

