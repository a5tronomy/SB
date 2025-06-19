#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorCaster.h"
#include "ESBZoneEventActorTarget.h"
#include "ESBZoneEventEventorType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasEffect.h"
#include "SBAliasEventActorEffect.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventActorEffect.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventActorEffect : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasEffect EffectAlias;
    
    UPROPERTY()
    FSBAliasEventActorEffect ActorEffectAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventActorCaster> ToCaster;
    
    UPROPERTY(VisibleAnywhere)
    FName CasterTagName;
    
    UPROPERTY()
    float EventDelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventActorEffect();

};

