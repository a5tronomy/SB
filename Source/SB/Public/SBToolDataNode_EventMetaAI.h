#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAIEventType.h"
#include "ESBMetaAIThink.h"
#include "ESBZoneEventActorTarget.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventMetaAI.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventMetaAI : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMetaAIEventType> MetaAIEventType;
    
    UPROPERTY(EditAnywhere)
    FName SpecialBehaviorTag;
    
    UPROPERTY(EditAnywhere)
    FName AddTag;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIThink ForceThink;
    
    UPROPERTY(EditAnywhere)
    FName ForceThink_BehaviorAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    USBToolDataNode_EventMetaAI();

};

