#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventEventorType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasItem.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventEnhanceResult.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventEnhanceResult : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FSBAliasItem Item;
    
    UPROPERTY(EditAnywhere)
    FText ResultText;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventEnhanceResult();

};

