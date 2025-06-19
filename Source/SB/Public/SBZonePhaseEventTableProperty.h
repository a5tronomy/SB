#pragma once
#include "CoreMinimal.h"
#include "ESBPhaseEventCompleteType.h"
#include "ESBPhaseEventType.h"
#include "ESBZoneEventType.h"
#include "SBTablePropertyBase.h"
#include "SBZonePhaseEventTableProperty.generated.h"

USTRUCT()
struct FSBZonePhaseEventTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhaseEventType> PhaseEventType;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBZoneEventType>> ActiveEventType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBZoneEventType>> StartEventType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StartEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBZoneEventType>> CompleteEventType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveZoneEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StartZoneEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteZoneEventList;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhaseEventCompleteType> PhaseEventCompleteType;
    
    UPROPERTY(EditAnywhere)
    int32 PhaseEventCompleteValue;
    
    UPROPERTY(EditAnywhere)
    FName NextPhaseEvent;
    
    UPROPERTY(EditAnywhere)
    float PhaseEventDelayTime;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    bool bWithDestory;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZonePhaseEventTableProperty();
};

