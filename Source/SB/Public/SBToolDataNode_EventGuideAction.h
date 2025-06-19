#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorTarget.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasGuideAction.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventGuideAction.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventGuideAction : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    bool StopGuideAction;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasGuideAction GuideActionAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FollowerTagNameArray;
    
    UPROPERTY(EditAnywhere)
    float FollowerStartDelayTime;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventGuideAction();

};

