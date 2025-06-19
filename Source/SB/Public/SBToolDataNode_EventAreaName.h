#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventEventorType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventAreaName.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventAreaName : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    float DrawDuration;
    
    UPROPERTY(EditAnywhere)
    FText MainAreaText;
    
    UPROPERTY(EditAnywhere)
    FText SubAreaText;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventAreaName();

};

