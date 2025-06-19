#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventConditionCheckType.h"
#include "ESBZoneEventType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventType> Type;
    
    UPROPERTY(EditAnywhere)
    FName EventAlias;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventConditionCheckType> EventConditionCheckType;
    
    UPROPERTY(EditAnywhere)
    float EventDelayTime;
    
    UPROPERTY(EditAnywhere)
    float EventDelayMinTime;
    
    UPROPERTY(EditAnywhere)
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreEventByPlayerDead;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FinishEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AddEvents;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventTableProperty();
};

