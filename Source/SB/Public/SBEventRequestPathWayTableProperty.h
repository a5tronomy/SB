#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventPathWayActionType.h"
#include "SBTablePropertyBase.h"
#include "SBEventRequestPathWayTableProperty.generated.h"

USTRUCT()
struct FSBEventRequestPathWayTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName LevelTargetFilter;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventPathWayActionType> ActionType;
    
    UPROPERTY(EditAnywhere)
    FName PathWayAlias;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventRequestPathWayTableProperty();
};

