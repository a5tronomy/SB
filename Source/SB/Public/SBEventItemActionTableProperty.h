#pragma once
#include "CoreMinimal.h"
#include "ESBItemActionType.h"
#include "SBTablePropertyBase.h"
#include "SBEventItemActionTableProperty.generated.h"

USTRUCT()
struct FSBEventItemActionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemActionType> ActionType;
    
    UPROPERTY(EditAnywhere)
    FName Item;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    FName TargetFilter;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventItemActionTableProperty();
};

